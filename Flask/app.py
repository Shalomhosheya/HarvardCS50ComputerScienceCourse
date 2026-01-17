# pip install flask

from flask import Flask, render_template, request, redirect, url_for, flash, session

app = Flask(__name__) 

@app.route("/")
def index():
    name = request.args.get("name", "World")
    # if "name" in request.args:
    #     name = request.args["name"]
    # else:
    #     name = "World"
    return render_template('index.html',name=name)