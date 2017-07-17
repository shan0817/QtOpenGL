#ifndef OPENGLWINDOW_H
#define OPENGLWINDOW_H

#include <QOpenGLWidget>
#include <QOpenGLFunctions_4_3_Core>

class openglWindow : public QOpenGLWidget,
                     protected QOpenGLFunctions_4_3_Core
{
    Q_OBJECT
public:
    openglWindow(QWidget *parent=0);
    ~openglWindow();

    void initializeGL();
    void resizeGL(int width, int height);
    void paintGL();

protected:
    void mouseMoveEvent(QMouseEvent *event);
    void wheelEvent(QWheelEvent *event);
    void mousePressEvent(QMouseEvent *event);
};

#endif // OPENGLWINDOW_H
