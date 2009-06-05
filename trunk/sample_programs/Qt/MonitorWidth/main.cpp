#include <QApplication>
#include <QDesktopWidget>

#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    const QDesktopWidget *desktop_ptr = QApplication::desktop();

    int width_pixels = desktop_ptr->width();
    int height_pixels = desktop_ptr->height();

    float width_mm = desktop_ptr->widthMM();
    float height_mm = desktop_ptr->heightMM();

    std::cout<<"\nThe desktop width in mm is "<<width_mm;
    std::cout<<"\nThe desktop height in mm is "<<height_mm;

    return a.exec();
}
