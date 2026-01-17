# pip install flask

from flask import Flask, render_template, request, redirect, url_for, flash, session

app = Flask(__name__) 

@app.route("/",methods=["GET","POST"])
def index():
    if request.method == "GET":
        return render_template('index.html')
    elif request.method == "POST":   
        name = request.form.get("name", "world")
        return render_template("greet.html", name=name)

