/**
 * User: luckystar
 * Date: 13-8-31
 * Time: 下午10:41
 */

module.exports = function(grunt) {
    grunt.initConfig({
        pkg: grunt.file.readJSON("package.json"),
        less: {
            compile: {
                options: {
                    yuicompress: true
                },
                files: {
                    "stylesheets/*.css": "src/less/*.less"
                }
            }
        },
        jade: {
            compile: {
                files: {
                    "index.html": ["src/jade/index.jade"]
                }
            }
        },
        watch: {
            less: {
                files: ["src/less/*.less"],
                tasks: ["less:compile"]
            },
            jade: {
                files: ["src/jade/*.jade"],
                tasks: ["jade:compile"]
            }
        }
    });
    grunt.loadNpmTasks("grunt-contrib-less");
    grunt.loadNpmTasks("grunt-contrib-jade");
    grunt.loadNpmTasks("grunt-contrib-watch");
    return grunt.registerTask("default", ["less:compile", "jade:compile"]);
};
