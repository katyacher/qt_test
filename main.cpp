#include <QApplication>
#include <QSlider>
#include <QSpinBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    auto *slider = new QSlider(Qt::Horizontal);
    auto *spinbox = new QSpinBox();

    slider->setMinimum(0);
    slider->setMaximum(100);
    spinbox->setMaximum(100);
    spinbox->setMinimum(0);

    QObject::connect(slider, &QSlider::valueChanged, spinbox, &QSpinBox::setValue);

    slider->resize(50, 100);
    spinbox->resize(20,20);

    spinbox->move(900, 500);
    slider->move(800, 500);

    slider->show();
    spinbox->show();

    return a.exec();
}
