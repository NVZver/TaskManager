#include "comboboxdelegate.h"

ComboBoxDelegate::ComboBoxDelegate(QList<QString> idList, QList<QString> items, QObject *parent)
{
    this->cbxIDList.clear();
    this->cbxItems.clear();
    this->setCbxIDList(idList);
    this->setCbxItems(items);
}

QWidget *ComboBoxDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    qDebug()<<"createEditor";
    QComboBox *comboBox = new QComboBox(parent);
    comboBox->setFrame(false);
    comboBox->addItems(getCbxItems());
    QString temp = index.model()->data(index, Qt::EditRole).toString();
    comboBox->setCurrentIndex(comboBox->findText(temp));
    return comboBox;
}

void ComboBoxDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
    qDebug()<<"setEditorData";
    QString temp = index.model()->data(index, Qt::EditRole).toString();
    QComboBox *cbx = static_cast<QComboBox*>(editor);
    cbx->setCurrentIndex(cbx->findText(temp));
    qDebug()<<cbx->currentIndex()<<": "<<cbx->currentText();
}

void ComboBoxDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{
    qDebug()<<"setModelData";
    QComboBox *cbx = static_cast<QComboBox*>(editor);
    QString value = cbx->currentText();
    model->setData(index,value, Qt::EditRole);
}

void ComboBoxDelegate::updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    editor->setGeometry(option.rect);
}

ComboBoxDelegate::~ComboBoxDelegate()
{

}
QList<QString> ComboBoxDelegate::getCbxItems() const
{
    return cbxItems;
}

void ComboBoxDelegate::setCbxItems(const QList<QString> &value)
{
    cbxItems = value;
}
QList<QString> ComboBoxDelegate::getCbxIDList() const
{
    return cbxIDList;
}

void ComboBoxDelegate::setCbxIDList(const QList<QString> &value)
{
    cbxIDList = value;
}



