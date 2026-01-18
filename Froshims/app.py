# pip install flask

from flask import Flask, render_template, request, redirect, url_for, flash, session

app = Flask(__name__) 

@app.route("/",methods=["GET","POST"])
def index():
    return render_template("index.html")

@app.route("/register",methods=["GET","POST"])
def register():
    name = request.form.get("name")
    sport = request.form.get("sport")
    registrants[name]=sport
    return render_template("success.html")

@app.route("/registrants",methods=["GET","POST"])
def registrants():
    return render_template("registrants.html",registrants=registrants)
