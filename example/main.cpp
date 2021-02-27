/*
 * Copyright (C) 2018 Damir Porobic <damir.porobic@gmx.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#include <QApplication>
#include <QVBoxLayout>
#include <kColorPicker/KColorPicker.h>

using kColorPicker::KColorPicker;

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    auto widget = new QWidget();
    widget->setFixedWidth(200);
    widget->setFixedHeight(200);
    auto layout = new QVBoxLayout();
    auto colorPicker = new KColorPicker();
    colorPicker->setColor(QColor(Qt::red));
    //change size of the colorPicker widget
//    colorPicker->setFixedSize(150, 150);

    layout->addWidget(colorPicker);
    widget->setLayout(layout);
    widget->show();

    return app.exec();
}
