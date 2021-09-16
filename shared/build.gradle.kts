import org.jetbrains.kotlin.gradle.plugin.mpp.KotlinNativeTarget

plugins {
    kotlin("multiplatform")
    kotlin("native.cocoapods")
    id("com.android.library")
}


version = "1.0"

kotlin {
    android()

    val iosTarget: (String, KotlinNativeTarget.() -> Unit) -> KotlinNativeTarget = when {
        System.getenv("SDK_NAME")?.startsWith("iphoneos") == true -> ::iosArm64
       /* System.getenv("NATIVE_ARCH")?.startsWith("arm") == true -> ::iosSimulatorArm64*/
        else -> ::iosX64
    }

    iosTarget("ios") {}

    cocoapods {
        summary = "Some description for the Shared Module"
        homepage = "Link to the Shared Module homepage"
        ios.deploymentTarget = "13.0"

//        frameworkName = "shared"
//        podfile = project.file("../iOSApp/Podfile")

        xcodeConfigurationToNativeBuildType["development_debug"] =
            org.jetbrains.kotlin.gradle.plugin.mpp.NativeBuildType.DEBUG
        xcodeConfigurationToNativeBuildType["development_release"] =
            org.jetbrains.kotlin.gradle.plugin.mpp.NativeBuildType.RELEASE
        xcodeConfigurationToNativeBuildType["staging_debug"] =
            org.jetbrains.kotlin.gradle.plugin.mpp.NativeBuildType.DEBUG
        xcodeConfigurationToNativeBuildType["staging_release"] =
            org.jetbrains.kotlin.gradle.plugin.mpp.NativeBuildType.RELEASE
        xcodeConfigurationToNativeBuildType["production_debug"] =
            org.jetbrains.kotlin.gradle.plugin.mpp.NativeBuildType.DEBUG
        xcodeConfigurationToNativeBuildType["production_release"] =
            org.jetbrains.kotlin.gradle.plugin.mpp.NativeBuildType.RELEASE
        xcodeConfigurationToNativeBuildType["AppStore"] =
            org.jetbrains.kotlin.gradle.plugin.mpp.NativeBuildType.RELEASE

    }

    sourceSets {
        val commonMain by getting {
            dependencies {
                //Network
                implementation("io.ktor:ktor-client-core:${Dependencies.ktor_version}")
                implementation("io.ktor:ktor-client-logging:${Dependencies.ktor_version}")
                //Coroutines
                implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core:${Dependencies.coroutines_version}")
                //Logger
                implementation("io.github.aakira:napier:2.0.0")
                //JSON
                implementation("org.jetbrains.kotlinx:kotlinx-serialization-json:${Dependencies.kotlinx_serialization_version}")
                //Key-Value storage
                //implementation("com.russhwolf:multiplatform-settings:0.7.7")
                implementation("io.ktor:ktor-client-serialization:1.6.2")

            }
        }
        val androidMain by getting {
            dependencies {
                //Network
                implementation("io.ktor:ktor-client-okhttp:${Dependencies.ktor_version}")
            }
        }

        val iosMain by getting {
            dependencies {
                //Network
                implementation("io.ktor:ktor-client-ios:${Dependencies.ktor_version}")
            }
        }
        val commonTest by getting {
            dependencies {
                implementation(kotlin("test-common"))
                implementation(kotlin("test-annotations-common"))
            }
        }
        val androidTest by getting {
            dependencies {
                implementation(kotlin("test-junit"))
                implementation("junit:junit:4.13.2")
            }
        }
        val iosTest by getting
    }
}

android {
    compileSdk = Dependencies.compileSdk

    defaultConfig {
        minSdk = Dependencies.minSdk
        targetSdk = Dependencies.targetSdk
    }
    sourceSets["main"].manifest.srcFile("src/androidMain/AndroidManifest.xml")
}

object Dependencies {
    const val android_gradle_plugin = "7.0.2"
    const val minSdk = 21
    const val compileSdk = 30
    const val targetSdk = 30
    const val coroutines_version = "1.5.1-native-mt"
    const val ktor_version = "1.6.2"
    const val kotlinx_serialization_version = "1.2.2"

}