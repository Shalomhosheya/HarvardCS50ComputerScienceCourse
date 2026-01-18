# pip install flask

from flask import Flask, render_template, request, redirect, url_for, flash, session

app = Flask(__name__) 

@app.route("/",methods=["GET","POST"])
def index():
    return render_template("index.html")

@app.route("/register")
def register():
    return render_template("success.html")