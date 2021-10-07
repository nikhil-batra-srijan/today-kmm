Pod::Spec.new do |spec|
    spec.name                     = 'shared'
    spec.version                  = '1.0'
    spec.homepage                 = 'https://github.com/nikhil-batra-srijan/today-kmm/tree/0.0.1'
    spec.authors                  = ''
    spec.license                  = { :type => 'BSD' }
    spec.summary                  = 'Some description for the Shared Module'
    spec.source                   = { :http => 'https://github.com/nikhil-batra-srijan/today-kmm/releases/download/0.0.1/Frameworks.zip' }
    spec.vendored_frameworks      = 'Frameworks/shared.framework'

    spec.ios.deployment_target = '13.0'

    spec.pod_target_xcconfig = {
        'KOTLIN_PROJECT_PATH' => ':shared',
        'PRODUCT_MODULE_NAME' => 'shared',
    }
end