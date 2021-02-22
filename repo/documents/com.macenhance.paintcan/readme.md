# PaintCan:

- About         : PaintCan is a MacForge Plugin that allows hotswapping car files on the fly without replacing any System files.
- System       : macOS 10.14+
- Author        : [MacEnhance](https://github.com/MacEnhance)

# Directions :

1. Copy `Aqua.car` and `DarkAqua.car` from 
```sh
/System/Library/CoreServices/SystemAppearance.bundle/Contents/Resources/
to 
/Library/Application Support/MacEnhance/Plugins/PaintCan.bundle/Contents/Resources/
```
2. Change the file names to  `NSAppearanceNameAqua.paintcan.car` and `NSAppearanceNameDarkAqua.paintcan.car`
3. Modify the `.car` files to your liking
4. Restart any app to see changes applied (log out and back in to apply changes to all apps)
5. When an app opens or the system change from light to dark mode it will load your custom appearance if it exists
