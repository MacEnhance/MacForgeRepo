# MacForge Repo

The repository for [MacForge](https://github.com/w0lfschild/MacForge), the macOS Plugin Manager.

## Publishing a product:

 - Ceate an Application, [Tweak](#creating-a-tweak) or Theme
 - Fork this project
 - Add your compiled and zipped plugin to the bundles folder `../MacForgeRepo/repo/bundles`
 - Create a folder with the bundleID of you plugin in `../MacForgeRepo/repo/documents`
 - Up to 6 preview imaages can be added to `../MacForgeRepo/repo/documents/<your bundle ID>/previewImages` in the format `01.png` to `06.png`
 - An icon can be added at `../MacForgeRepo/repo/documents/<your bundle ID>/icon.png`
 - Edit `../MacForgeRepo/repo/packages.plist` to include your submission
 - If you would like to have you protuct featured message me @<>
 - Submit a pull request
 
 ## Creating a tweak

 - Fork this project
 - Open the Example project in `../MacForgeRepo/templates/Example Plugin`
 - Add your code
 - You can find header dumps of most Apple Applications [HERE](https://github.com/w0lfschild/macOS_headers)
 - Build your code
 - Open your plugin with `MacForge` to load it
 - Test it!
 - [Publish it!](#publishing-a-product)
 
 ## Selling a product

 - [Make something](https://github.com/w0lfschild/MacForge/wiki/Bundles-:-Creating) you want to sell
 - Open a [Paddle](https://paddle.com) account
 - Setup your bundle in Paddle
 - Add your Paddle info to your listing in packages.plist
- [Publish it!](#publishing-a-product)
 
 ## Updating packages.plist:

Every package uses this format:

```
Dict:
    key: bundleID
        Dict:
            key: apps <string>
            key: author <string>
            key: compat <string>
            key: contact <string>
            key: date <string>
            key: description <string>
            key: descriptionShort <string>
            key: donate <string>
            key: filename (required) <string>
            key: hasPreview <boolean>
            key: homepage <string>
            key: name (required) <string>
            key: package (required) <string>
            key: paddle <dict>
                key: apikey <string>
                key: productid <string>
                key: vendorid <string>
            key: payed <boolean>
            key: price <string>
            key: price
            key: size
            key: target
            key-array: targets
                Dict:
                    key: BundleIdentifier
            key: type <app, bundle, theme>
            key: version (required) <string>
            key: webpage <string>
```

Example:


```
<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE plist PUBLIC "-//Apple//DTD PLIST 1.0//EN" "http://www.apple.com/DTDs/PropertyList-1.0.dtd">
<plist version="1.0">
<dict>
	<key>org.w0lf.winBuddy</key>
	<dict>
		<key>apps</key>
		<string>System</string>
		<key>author</key>
		<string>Wolfgang Baird</string>
		<key>compat</key>
		<string>macOS 10.9+</string>
		<key>contact</key>
		<string>support@macenhance.com</string>
		<key>date</key>
		<string>Dec 20, 2016</string>
		<key>description</key>
		<string>Removes window shadow, black border and more</string>
		<key>descriptionShort</key>
		<string></string>
		<key>donate</key>
		<string>https://www.paypal.me/w0lfspapa</string>
		<key>filename</key>
		<string>/bundles/winBuddy_0.2.7.zip</string>
		<key>homepage</key>
		<string></string>
		<key>name</key>
		<string>winBuddy</string>
		<key>package</key>
		<string>org.w0lf.winBuddy</string>
		<key>price</key>
		<string>Free</string>
		<key>size</key>
		<string>23087</string>
		<key>target</key>
		<string>null</string>
		<key>targets</key>
		<array>
			<dict>
				<key>BundleIdentifier</key>
				<string>*</string>
			</dict>
		</array>
		<key>version</key>
		<string>0.2.7</string>
		<key>webpage</key>
		<string></string>
	</dict>
</dict>
</plist>
```
