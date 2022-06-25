#ifndef SETTINGSTORE_H
#define SETTINGSTORE_H


#include <QWidget>
#include <QVariant>

class settingStore {
public:
    QString theme;
    QString themepath;
    int cursor_width;
    bool auto_tab;
    bool refer_line;

    settingStore();
    settingStore(int); // TODO: load from cache file
    QString themePath();
    static QString booltostr(bool bol);
    static bool strtobool(QString qstr);
    void set_theme(QString);
    void set_cursor_width(int);
    void set_auto_tab(QString);
    void set_refer_line(QString);

};

#endif
