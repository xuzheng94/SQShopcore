Pod::Spec.new do |s|
    s.name             = "Shopcore"   
    s.version          = "1.3.3"    
    s.summary          = "shop"  
    s.description  = "SQ ShopCore"
    s.homepage         = "https://github.com/xuzheng94/SQShopcore.git"
    s.license          = "MIT"        
    s.author             = { "sunny" => "18763895318@163.com" }                   
    s.source       = { :git => "https://github.com/xuzheng94/SQShopcore.git", :tag => s.version }                          
    s.frameworks = "UIKit"
    s.vendored_frameworks = "shopcore.xcframework"
    s.dependency "Shopcore-Cordova-iOS", '~>1.3.0'
    s.requires_arc = true
    s.ios.deployment_target = "10.0"
    s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
    s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  end