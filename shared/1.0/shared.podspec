Pod::Spec.new do |spec|
    spec.name                     = 'shared'
    spec.version                  = '1.0'
    spec.homepage                 = 'https://github.com/nikhil-batra-srijan/today-kmm/tree/0.0.1'
    # spec.source                   = { :git => "https://github.com/mediacorp/news-core-kmm.git", :tag => "develop" }
    spec.authors                  = ''
    spec.license                  = { :type => 'BSD' }
    spec.summary                  = 'Some description for the Shared Module'
    spec.source                   = { :http => 'https://github.com/nikhil-batra-srijan/today-kmm/releases/download/0.0.1/Fameworks.zip' }
    spec.vendored_frameworks      = 'Fameworks/shared.framework'
    # spec.libraries                = "c++"
    # spec.module_name              = "#{spec.name}_umbrella"

    spec.ios.deployment_target = '13.0'

                

    spec.pod_target_xcconfig = {
        'KOTLIN_PROJECT_PATH' => ':shared',
        'PRODUCT_MODULE_NAME' => 'shared',
    }

    # spec.script_phases = [
    #     {
    #         :name => 'Build shared',
    #         :execution_position => :before_compile,
    #         :shell_path => '/bin/sh',
    #         :script => <<-SCRIPT
    #             if [ "YES" = "$COCOAPODS_SKIP_KOTLIN_BUILD" ]; then
    #               echo "Skipping Gradle build task invocation due to COCOAPODS_SKIP_KOTLIN_BUILD environment variable set to \"YES\""
    #               exit 0
    #             fi
    #             set -ev
    #             REPO_ROOT="$PODS_TARGET_SRCROOT"
    #             "gradlew -p "$REPO_ROOT" $KOTLIN_PROJECT_PATH:syncFramework \
    #                 -Pkotlin.native.cocoapods.platform=$PLATFORM_NAME \
    #                 -Pkotlin.native.cocoapods.archs="$ARCHS" \
    #                 -Pkotlin.native.cocoapods.configuration=$CONFIGURATION \
    #                 -Pkotlin.native.cocoapods.cflags="$OTHER_CFLAGS" \
    #                 -Pkotlin.native.cocoapods.paths.headers="$HEADER_SEARCH_PATHS" \
    #                 -Pkotlin.native.cocoapods.paths.frameworks="$FRAMEWORK_SEARCH_PATHS"
    #         SCRIPT
    #     }
    # ]
end