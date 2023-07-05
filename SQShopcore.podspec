Pod::Spec.new do |s|
    s.name             = "SQShopcore"   
    s.version          = "1.0.0"    
    s.summary          = "1.0.0 Version"  
    s.description  = "<<-SQShopcore"
    s.homepage         = "https://github.com/xuzheng94/SQShopcore.git"
    s.license          = "MIT"        
    s.author             = { "sunny" => "18763895318@163.com" }                   
    s.source       = { :git => "https://github.com/xuzheng94/SQShopcore.git", :tag => s.version }                          
    s.frameworks = "UIKit"
    s.vendored_frameworks = "shopcore.framework"
    s.dependency "Shopcore-Cordova-iOS", '~>1.1.0'
    s.requires_arc = true
    # s.xcconfig = {"OTHER_LDFLAGS" => "-ObjC"}
    s.ios.deployment_target = "11.0"
    # s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
    # s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  end