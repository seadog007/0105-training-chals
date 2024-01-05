from flask import Flask, request
from jinja2 import Template

app = Flask(__name__)

@app.route("/api", methods=['POST','GET'])
def index():
    if request.method == "POST":
        name = request.values['name']
        t = Template("Thank you, " + name)
        return t.render()

    if request.method == "GET":
        t = Template("Form API Server, POST with name=xxx")
        return t.render()

if __name__ == "__main__":
    app.run(host='0.0.0.0')
