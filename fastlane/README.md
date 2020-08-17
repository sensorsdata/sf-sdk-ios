fastlane documentation
================
# Installation

Make sure you have the latest version of the Xcode command line tools installed:

```
xcode-select --install
```

Install _fastlane_ using
```
[sudo] gem install fastlane -NV
```
or alternatively using `brew install fastlane`

# Available Actions
## iOS
### ios test
```
fastlane ios test
```
Runs all the tests
### ios commit
```
fastlane ios commit
```
Commit
### ios prepare_release
```
fastlane ios prepare_release
```
Prepare release new version
### ios github_tag
```
fastlane ios github_tag
```

### ios github_release
```
fastlane ios github_release
```

### ios cocoapods_push
```
fastlane ios cocoapods_push
```

### ios github_push
```
fastlane ios github_push
```

### ios release
```
fastlane ios release
```


----

This README.md is auto-generated and will be re-generated every time [fastlane](https://fastlane.tools) is run.
More information about fastlane can be found on [fastlane.tools](https://fastlane.tools).
The documentation of fastlane can be found on [docs.fastlane.tools](https://docs.fastlane.tools).
