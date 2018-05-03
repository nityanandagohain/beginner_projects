const fs = require('fs');
const webdriver = require('selenium-webdriver'),
    By = webdriver.By;

    var configFile = JSON.parse(fs.readFileSync('config.json','utf-8'));

    var driver = new webdriver.Builder().forBrowser('chrome').build();

    driver.get('https://login.salesforce.com/');
    driver.findElement(By.id('username')).sendKeys(configFile.credentials.username).then(()=>{
        console.log('Email Entered');
    });
    driver.findElement(By.id('password')).sendKeys(configFile.credentials.password).then(()=>{
        console.log("Password Entered");
    });
    driver.findElement(By.id('Login')).click().then(()=>{
        console.log("Login Clicked");
    });
    driver.sleep(5000);
    driver.quit();