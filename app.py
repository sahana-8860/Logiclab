from flask import Flask, render_template

app = Flask(__name__)

@app.route('/')
def home():
    return render_template('index.html')

@app.route('/register')
def register():
    return render_template('register.html')

@app.route('/login')
def login():
    return render_template('login.html')

@app.route('/search')
def search():
    return render_template('search.html')

@app.route('/request')
def request_blood():
    return render_template('request.html')

if __name__ == '__main__':
    app.run(debug=True)
