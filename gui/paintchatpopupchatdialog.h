#ifndef PAINTCHATPOPUPCHATDIALOG_H
#define PAINTCHATPOPUPCHATDIALOG_H

#include <gui/chat/PopupChatDialog.h>
#include "paintchatwindow.h"

class PaintChatPopupChatDialog : public PopupChatDialog
{
    Q_OBJECT
public:
    PaintChatPopupChatDialog(QWidget *parent = NULL);

private slots:
    void togglePaintChatWindow();

protected:
    virtual void init(const std::string &peerId, const QString &title);

private:
    QPushButton *paintChatWindowToggleButton;
    PaintChatWindow *paintChatWindow;
};

#endif // PAINTCHATPOPUPCHATDIALOG_H
