/**
 * User: luckystar
 * Date: 13-10-3
 * Time: 14:24
 */

var express = require('express')
    , app = express()

app.configure(function () {
    app.use("/slides", express.directory(__dirname + "/slides"))
    app.use("/slides", express["static"](__dirname + "/slides"))
})

app.listen(3000, function () {
    console.log('http://localhost:3000/slides')
})
