#pip install flask 
# pip install flask mysql-connector-python
import mysql.connector
from flask import Flask, render_template, request, redirect, url_for, flash, session, g

app = Flask(__name__)
app.secret_key = 'your-secret-key-here-change-this'

# MySQL Configuration
DB_CONFIG = {
    'host': 'localhost',
    'port': 3306,
    'database': 'registrants',
    'user': 'root',
    'password': 'shalom@12344321'
}

SPORTS = {
    "football": "Football",
    "basketball": "Basketball",
    "volleyball": "Volleyball"
}

# Database helper functions
def get_db():
    db = getattr(g, '_database', None)
    if db is None:
        db = g._database = mysql.connector.connect(**DB_CONFIG)
    return db

@app.teardown_appcontext
def close_connection(exception):
    db = getattr(g, '_database', None)
    if db is not None:
        db.close()

def init_db():
    """Initialize database and create table if it doesn't exist"""
    try:
        conn = mysql.connector.connect(
            host=DB_CONFIG['host'],
            port=DB_CONFIG['port'],
            user=DB_CONFIG['user'],
            password=DB_CONFIG['password']
        )
        cursor = conn.cursor()
        
        # Create database if it doesn't exist
        cursor.execute(f"CREATE DATABASE IF NOT EXISTS {DB_CONFIG['database']}")
        cursor.execute(f"USE {DB_CONFIG['database']}")
        
        # Create table
        cursor.execute('''
            CREATE TABLE IF NOT EXISTS registrants (
                id INT AUTO_INCREMENT PRIMARY KEY,
                name VARCHAR(255) NOT NULL,
                sport VARCHAR(50) NOT NULL
            )
        ''')
        
        conn.commit()
        cursor.close()
        conn.close()
        print("Database initialized successfully!")
    except mysql.connector.Error as err:
        print(f"Error: {err}")

@app.route("/", methods=["GET", "POST"])
def index():
    return render_template("index.html", sports=SPORTS)

@app.route("/register", methods=["POST"])
def register():
    name = request.form.get("name")
    sport = request.form.get("sport")
    
    if not name or sport not in SPORTS:
        return render_template("failure.html")
    
    db = get_db()
    cursor = db.cursor()
    cursor.execute("INSERT INTO registrants (name, sport) VALUES (%s, %s)", (name, sport))
    db.commit()
    cursor.close()
    
    return redirect(url_for("registrants"))

@app.route("/registrants")
def registrants():
    db = get_db()
    cursor = db.cursor(dictionary=True)
    cursor.execute("SELECT * FROM registrants")
    registrants_data = cursor.fetchall()
    cursor.close()
    
    return render_template("registrants.html", registrants=registrants_data)

if __name__ == "__main__":
    init_db()  # Initialize database on startup
    app.run(debug=True)