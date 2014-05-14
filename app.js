/**
 * User: luckystar
 * Date: 13-10-3
 * Time: 14:24
 */

var express = require('express')
    , app = express()

app.configure(function () {
    app.use("/", express.directory(__dirname + "/"))
    app.use("/", express["static"](__dirname + "/"))
})

app.listen(3000, function () {
    console.log('http://localhost:3000/slides')
})
