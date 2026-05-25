cordova.define('cordova/plugin_list', function (require, exports, module) {
  module.exports = [
    {
      "id": "cordova-plugin-device.device",
      "file": "plugins/cordova-plugin-device/www/device.js",
      "pluginId": "cordova-plugin-device",
      "clobbers": [
        "cordova.device"
      ]
    },
    {
      "id": "cordova-plugin-advanced-http2.http",
      "file": "plugins/cordova-plugin-advanced-http2/www/cordovaHttp.js",
      "pluginId": "cordova-plugin-advanced-http2",
      "clobbers": [
        "cordova.plugin.http"
      ]
    },
    {
      "id": "cordova-plugin-jsbridge.jsbridge",
      "file": "plugins/cordova-plugin-jsbridge/www/jsbridge.js",
      "pluginId": "cordova-plugin-jsbridge",
      "clobbers": [
        "plus.jsbridge"
      ]
    },
    {
      "id": "cordova-plugin-api.api",
      "file": "plugins/cordova-plugin-api/www/api.js",
      "pluginId": "cordova-plugin-api",
      "clobbers": [
        "wx"
      ]
    },
  ];
  module.exports.metadata = {
    "cordova-plugin-device": "2.0.3",
    "cordova-plugin-advanced-http2": "1.6.1",
    "cordova-plugin-api": "0.0.1",
  };
});
