cordova.define("cordova-plugin-jsbridge.jsbridge", function(require, exports, module) {

var argscheck = require('cordova/argscheck');
var channel = require('cordova/channel');
var utils = require('cordova/utils');
var exec = require('cordova/exec');
var cordova = require('cordova');

function JsBridge () {
}

// for temp test
JsBridge.prototype.open = function (url) {
    exec(res=>{}, err => {}, 'JsBridge', 'open', [url]);
};
    
JsBridge.prototype.reload = function () {
    exec(res=>{}, err => {}, 'JsBridge', 'reload', []);
};

// 路由

JsBridge.prototype.navigateTo = function(url) {
    exec(res=>{}, err => {}, 'JsBridge', 'navigateTo', [url]);
}

JsBridge.prototype.navigateBack = function() {
    exec(res=>{}, err => {}, 'JsBridge', 'navigateBack', []);
}

JsBridge.prototype.switchTab = function(url) {
    exec(res=>{}, err => {}, 'JsBridge', 'switchTab', [url]);
}
    
JsBridge.prototype.switchHome = function() {
    exec(res=>{}, err => {}, 'JsBridge', 'switchHome', []);
}

JsBridge.prototype.reLaunch = function(url) {
    exec(res=>{}, err => {}, 'JsBridge', 'reLaunch', [url]);
}

JsBridge.prototype.redirectTo = function(url) {
    exec(res=>{}, err => {}, 'JsBridge', 'redirectTo', [url]);
}
    
JsBridge.prototype.postMessage = function(url) {
    exec(res=>{}, err => {}, 'JsBridge', 'postMessage', [url]);
}

JsBridge.prototype.requestPayment = function(obj) {
    exec(res=>{
        obj && obj.success && obj.success(res)
    }, err => {
        obj && obj.fail && obj.fail(err)
    }, 'JsBridge', 'requestPayment', [obj]);
}
JsBridge.prototype.login = function(obj) {
    exec(res=>{
        obj && obj.success && obj.success(res)
    }, err => {
        obj && obj.fail && obj.fail(err)
    }, 'JsBridge', 'login', [obj]);
}

JsBridge.prototype.loginWithApple = function(obj) {
    exec(res=>{
        obj && obj.success && obj.success(res)
    }, err => {
        obj && obj.fail && obj.fail(err)
    }, 'JsBridge', 'loginWithApple', [obj]);
}

JsBridge.prototype.previewImage = function(obj) {
    exec(res=>{
        obj && obj.success && obj.success(res)
    }, err => {
        obj && obj.fail && obj.fail(err)
    }, 'JsMediaBridge', 'previewImage', [obj]);
}
    
JsBridge.prototype.scanCode = function(obj) {
    exec(res=>{
        obj && obj.success && obj.success(res)
    }, err => {
        obj && obj.fail && obj.fail(err)
    }, 'JsBridge', 'scanCode', []);
}
    
JsBridge.prototype.chooseImage = function(obj) {
    exec(res=>{
        obj && obj.success && obj.success(res)
    }, err => {
        obj && obj.fail && obj.fail(err)
    }, 'JsMediaBridge', 'chooseImage', [obj]);
}
    
JsBridge.prototype.getLocalImgData = function(obj) {
    exec(res=>{
        obj && obj.success && obj.success(res)
    }, err => {
        obj && obj.fail && obj.fail(err)
    }, 'JsMediaBridge', 'getLocalImgData', [obj]);
}
    
JsBridge.prototype.saveImageToPhotosAlbum = function(obj) {
    exec(res=>{
        obj && obj.success && obj.success(res)
    }, err => {
        obj && obj.fail && obj.fail(err)
    }, 'JsMediaBridge', 'saveImageToPhotosAlbum', [obj]);
}
  
JsBridge.prototype.isWXAppInstalled = function(obj) {
    exec(res=>{
        obj && obj.success && obj.success(res)
    }, err => {
        obj && obj.fail && obj.fail(err)
    }, 'JsBridge', 'isWXAppInstalled', [obj]);
}
    
JsBridge.prototype.setLocale = function(obj) {
    exec(res=>{
        obj && obj.success && obj.success(res)
    }, err => {
        obj && obj.fail && obj.fail(err)
    }, 'JsBridge', 'setLocale', [obj]);
}
    
JsBridge.prototype.getLocation = function(obj) {
    exec(res=>{
        obj && obj.success && obj.success(res)
    }, err => {
        obj && obj.fail && obj.fail(err)
    }, 'JsBridge', 'getLocation', [obj]);
}
    
JsBridge.prototype.setMchId = function(obj) {
    exec(res=>{
        obj && obj.success && obj.success(res)
    }, err => {
        obj && obj.fail && obj.fail(err)
    }, 'JsBridge', 'setMchId', [obj]);
}
    
JsBridge.prototype.getMchId = function(obj) {
    exec(res=>{
        obj && obj.success && obj.success(res)
    }, err => {
        obj && obj.fail && obj.fail(err)
    }, 'JsBridge', 'getMchId', [obj]);
}
    
JsBridge.prototype.reloadPage = function(obj) {
    exec(res=>{
        obj && obj.success && obj.success(res)
    }, err => {
        obj && obj.fail && obj.fail(err)
    }, 'JsBridge', 'reloadPage', [obj]);
}

JsBridge.prototype.setStorage = function(obj) {
    exec(res=>{
        obj && obj.success && obj.success(res)
    }, err => {
        obj && obj.fail && obj.fail(err)
    }, 'JsBridge', 'setStorage', [obj]);
}

JsBridge.prototype.openMiniProgram = function(obj) {
    exec(res=>{
        obj && obj.success && obj.success(res)
    }, err => {
        obj && obj.fail && obj.fail(err)
    }, 'JsBridge', 'openMiniProgram', [obj]);
}

JsBridge.prototype.exitApp = function(obj) {
    exec(res=>{
        obj && obj.success && obj.success(res)
    }, err => {
        obj && obj.fail && obj.fail(err)
    }, 'JsBridge', 'exitApp', [obj]);
}
    
JsBridge.prototype.reloadPreviousPage = function(obj) {
    exec(res=>{
        obj && obj.success && obj.success(res)
    }, err => {
        obj && obj.fail && obj.fail(err)
    }, 'JsBridge', 'reloadPreviousPage', [obj]);
}
JsBridge.prototype.getResInfo = function(obj) {
    exec(res=>{
        obj && obj.success && obj.success(res)
    }, err => {
        obj && obj.fail && obj.fail(err)
    }, 'JsBridge', 'getResInfo', [obj]);
}
    
JsBridge.prototype.getNetworkType = function(obj) {
    exec(res=>{
        obj && obj.success && obj.success(res)
    }, err => {
        obj && obj.fail && obj.fail(err)
    }, 'JsBridge', 'getNetworkType', [obj]);
}
    
JsBridge.prototype.share = function(obj) {
    exec(res=>{
        obj && obj.success && obj.success(res)
    }, err => {
        obj && obj.fail && obj.fail(err)
    }, 'JsBridge', 'share', [obj]);
}
    
JsBridge.prototype.setStatusBarStyle = function(obj) {
    exec(res=>{
        obj && obj.success && obj.success(res)
    }, err => {
        obj && obj.fail && obj.fail(err)
    }, 'JsBridge', 'setStatusBarStyle', [obj]);
}
    
JsBridge.prototype.pay = function(obj) {
    exec(res=>{
        obj && obj.success && obj.success(res)
    }, err => {
        obj && obj.fail && obj.fail(err)
    }, 'JsBridge', 'pay', [obj]);
}
    
JsBridge.prototype.getSetting = function(obj) {
    exec(res=>{
        obj && obj.success && obj.success(res)
    }, err => {
        obj && obj.fail && obj.fail(err)
    }, 'JsBridge', 'getSetting', [obj]);
}

JsBridge.prototype.openSetting = function(obj) {
    exec(res=>{
        obj && obj.success && obj.success(res)
    }, err => {
        obj && obj.fail && obj.fail(err)
    }, 'JsBridge', 'openSetting', [obj]);
}

JsBridge.prototype.getXGToken = function(obj) {
    exec(res=>{
        obj && obj.success && obj.success(res)
    }, err => {
        obj && obj.fail && obj.fail(err)
    }, 'JsBridge', 'getXGToken', [obj]);
}
JsBridge.prototype.showTabBarRedDot = function(obj) {
    exec(res=>{
        obj && obj.success && obj.success(res)
    }, err => {
        obj && obj.fail && obj.fail(err)
    }, 'JsBridge', 'showTabBarRedDot', [obj]);
}
JsBridge.prototype.hideTabBarRedDot = function(obj) {
    exec(res=>{
        obj && obj.success && obj.success(res)
    }, err => {
        obj && obj.fail && obj.fail(err)
    }, 'JsBridge', 'hideTabBarRedDot', [obj]);
}
    
JsBridge.prototype.setSessionStorage = function(obj) {
    exec(res=>{
        obj && obj.success && obj.success(res)
    }, err => {
        obj && obj.fail && obj.fail(err)
    }, 'JsBridge', 'setSessionStorage', [obj]);
}

JsBridge.prototype.getSessionStorage = function(obj) {
    exec(res=>{
        obj && obj.success && obj.success(res)
    }, err => {
        obj && obj.fail && obj.fail(err)
    }, 'JsBridge', 'getSessionStorage', [obj]);
}
JsBridge.prototype.openChat = function(obj) {
    exec(res=>{
        obj && obj.success && obj.success(res)
    }, err => {
        obj && obj.fail && obj.fail(err)
    }, 'JsBridge', 'openChat', [obj]);
}

JsBridge.prototype.openChatList = function(obj) {
    exec(res=>{
        obj && obj.success && obj.success(res)
    }, err => {
        obj && obj.fail && obj.fail(err)
    }, 'JsBridge', 'openChatList', [obj]);
}

    
JsBridge.prototype.setPrivacyStatus = function(obj) {
    exec(res=>{
        obj && obj.success && obj.success(res)
    }, err => {
        obj && obj.fail && obj.fail(err)
    }, 'JsSABridgePlugin', 'setPrivacyStatus', [obj]);
}
JsBridge.prototype.setSATrackProperties = function(obj) {
    exec(res=>{
        obj && obj.success && obj.success(res)
    }, err => {
        obj && obj.fail && obj.fail(err)
    }, 'JsSABridgePlugin', 'setSATrackProperties', [obj]);
}
JsBridge.prototype.setSATrackSuperProperties = function(obj) {
    exec(res=>{
        obj && obj.success && obj.success(res)
    }, err => {
        obj && obj.fail && obj.fail(err)
    }, 'JsSABridgePlugin', 'setSATrackSuperProperties', [obj]);
}
JsBridge.prototype.trackSA = function(obj) {
    exec(res=>{
        obj && obj.success && obj.success(res)
    }, err => {
        obj && obj.fail && obj.fail(err)
    }, 'JsSABridgePlugin', 'trackSA', [obj]);
}
JsBridge.prototype.loginSA = function(obj) {
    exec(res=>{
        obj && obj.success && obj.success(res)
    }, err => {
        obj && obj.fail && obj.fail(err)
    }, 'JsSABridgePlugin', 'loginSA', [obj]);
}
    
module.exports = new JsBridge();

});
