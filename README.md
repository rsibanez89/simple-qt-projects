# Simple Qt Projects that explain you some basic concepts

## Installing Qt
1. Go to https://www.qt.io/download-open-source/#section-2
I'm using windows so I would recommend you to install
 > Qt 5.7.1 for Windows 32-bit (MinGW 5.3.0, 1.1 GB)
Once you install it, you don't need any additional configuration.
Oder versions, like Qt for 64-bit, need to configure the compiler.

### simple-qt-widget-drawing-ellipse-when-pressing-button
Example project that draws an ellipse when pressing a button.

#### Do it yourself
1. File > New File or Project > Qt Widgets Application
2. Next, next, next...
3. Press the "Play" button. It should open an empty window.
4. In the edit view (on the left side) select Forms > mainwindow.ui
5. Put a "Graphics View" and a "Push Button" on the window, just drag and drop.
6. Press the "Play" button. It should open the window with the "Graphics View" and the "Push Button" you just put.
7. Left click on the button > "Go to slot" > clicked()
8. Put the following code inside the on_pushButton_clicked() method
```js
    // We define the ellipse we are going to draw
    QGraphicsEllipseItem * ellipse = new QGraphicsEllipseItem();
    // We set the size of the ellipse
    ellipse->setRect(50,50,150,100);
    // We define a scene that will contain the ellipse and will be drawn on the graphics view
    QGraphicsScene * scene = new QGraphicsScene();
    // We add the ellipse to the scene
    scene->addItem(ellipse);
    // We set the scene in the graphics view
    ui->graphicsView->setScene(scene);
```
9. Include the following libraries
```js
	#include "QGraphicsEllipseItem"
	#include "QGraphicsScene"
```
10. Press the "Play" button. It should show an ellipse when you press the button.