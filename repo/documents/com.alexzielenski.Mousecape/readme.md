Mousecape
===

A free cursor manager for Mac OS 10.8+ built using private, nonintrusive CoreGraphics APIs.

## How it works

Mousecape works by calling the API calls that Apple uses to initialize the system cursors in the system and it registers a daemon that will automatically apply the cursor on login and when cursors get unregistered.

It is unintrusive and works in the background. You just need to open the app, click **Mousecape --> Install Helper Tool**, apply your cursor and you're done!

## Where do I get cursors?

Right here on MacForge!

## How can I create my own cape?

You can create a new cape document in the Mousecape app by hitting &#8984;N (Command-N) and editing it with &#8984;E. Click the "+" button to add cursors to customize and symply drag your images into the fields provided.

## How do animated cursors work?

When you want to animate a cursor, change the value in the frames field in the edit window and make sure frame duration is how you want it. Next, create an image that has all of your cursor frames stacked on top of each other vertically. Mousecape will traverse down the image for each frame, using a box the same size as whatever you put in the size field.