/********************************************************************************
** Form generated from reading UI file 'optionsdialog.ui'
**
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONSDIALOG_H
#define UI_OPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "bitcoinamountfield.h"
#include "qvalidatedlineedit.h"
#include "qvaluecombobox.h"

QT_BEGIN_NAMESPACE

class Ui_OptionsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tabMain;
    QVBoxLayout *verticalLayout_Main;
    QCheckBox *bitcoinAtStartup;
    QHBoxLayout *horizontalLayout_2_Main;
    QLabel *databaseCacheLabel;
    QSpinBox *databaseCache;
    QLabel *databaseCacheUnitLabel;
    QSpacerItem *horizontalSpacer_2_Main;
    QHBoxLayout *horizontalLayout_3_Main;
    QLabel *threadsScriptVerifLabel;
    QSpinBox *threadsScriptVerif;
    QSpacerItem *horizontalSpacer_3_Main;
    QSpacerItem *verticalSpacer_Main;
    QHBoxLayout *horizontalLayout_2_Main1;
    QLabel *label;
    QSpinBox *darksendRounds;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpinBox *anonymizeDarkcoin;
    QWidget *tabMining;
    QVBoxLayout *verticalLayout_Mining;
    QHBoxLayout *horizontalLayout_2_Mining;
    QLabel *labelMiningProcLimit;
    QValueComboBox *comboMiningProcLimit;
    QSpacerItem *verticalSpacer_Display1;
    QWidget *tabWallet;
    QVBoxLayout *verticalLayout_Wallet;
    QLabel *transactionFeeInfoLabel;
    QHBoxLayout *horizontalLayout_1_Wallet;
    QLabel *transactionFeeLabel;
    BitcoinAmountField *transactionFee;
    QSpacerItem *horizontalSpacer_1_Wallet;
    QSpacerItem *verticalSpacer_Wallet;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *coinControlFeatures;
    QCheckBox *spendZeroConfChange;
    QWidget *tabNetwork;
    QVBoxLayout *verticalLayout_Network;
    QCheckBox *mapPortUpnp;
    QCheckBox *connectSocks;
    QHBoxLayout *horizontalLayout_1_Network;
    QLabel *proxyIpLabel;
    QValidatedLineEdit *proxyIp;
    QLabel *proxyPortLabel;
    QLineEdit *proxyPort;
    QLabel *socksVersionLabel;
    QValueComboBox *socksVersion;
    QSpacerItem *horizontalSpacer_1_Network;
    QSpacerItem *verticalSpacer_Network;
    QWidget *tabWindow;
    QVBoxLayout *verticalLayout_Window;
    QCheckBox *minimizeToTray;
    QCheckBox *minimizeOnClose;
    QSpacerItem *verticalSpacer_Window;
    QWidget *tabDisplay;
    QVBoxLayout *verticalLayout_Display;
    QHBoxLayout *horizontalLayout_1_Display;
    QLabel *langLabel;
    QValueComboBox *lang;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_4_Display;
    QLabel *themeLabel;
    QValueComboBox *theme;
    QFrame *line;
    QHBoxLayout *horizontalLayout_2_Display;
    QLabel *unitLabel;
    QValueComboBox *unit;
    QCheckBox *displayAddresses;
    QHBoxLayout *horizontalLayout_3_Display;
    QLabel *thirdPartyTxUrlsLabel;
    QLineEdit *thirdPartyTxUrls;
    QSpacerItem *verticalSpacer;
    QFrame *frame;
    QVBoxLayout *verticalLayout_Bottom;
    QHBoxLayout *horizontalLayout_Bottom;
    QLabel *overriddenByCommandLineInfoLabel;
    QSpacerItem *horizontalSpacer_Bottom;
    QLabel *overriddenByCommandLineLabel;
    QHBoxLayout *horizontalLayout_Buttons;
    QPushButton *resetButton;
    QSpacerItem *horizontalSpacer_1;
    QLabel *statusLabel;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *OptionsDialog)
    {
        if (OptionsDialog->objectName().isEmpty())
            OptionsDialog->setObjectName(QStringLiteral("OptionsDialog"));
        OptionsDialog->resize(576, 402);
        OptionsDialog->setModal(true);
        verticalLayout = new QVBoxLayout(OptionsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(OptionsDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabMain = new QWidget();
        tabMain->setObjectName(QStringLiteral("tabMain"));
        verticalLayout_Main = new QVBoxLayout(tabMain);
        verticalLayout_Main->setObjectName(QStringLiteral("verticalLayout_Main"));
        bitcoinAtStartup = new QCheckBox(tabMain);
        bitcoinAtStartup->setObjectName(QStringLiteral("bitcoinAtStartup"));

        verticalLayout_Main->addWidget(bitcoinAtStartup);

        horizontalLayout_2_Main = new QHBoxLayout();
        horizontalLayout_2_Main->setObjectName(QStringLiteral("horizontalLayout_2_Main"));
        databaseCacheLabel = new QLabel(tabMain);
        databaseCacheLabel->setObjectName(QStringLiteral("databaseCacheLabel"));
        databaseCacheLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_2_Main->addWidget(databaseCacheLabel);

        databaseCache = new QSpinBox(tabMain);
        databaseCache->setObjectName(QStringLiteral("databaseCache"));

        horizontalLayout_2_Main->addWidget(databaseCache);

        databaseCacheUnitLabel = new QLabel(tabMain);
        databaseCacheUnitLabel->setObjectName(QStringLiteral("databaseCacheUnitLabel"));
        databaseCacheUnitLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_2_Main->addWidget(databaseCacheUnitLabel);

        horizontalSpacer_2_Main = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2_Main->addItem(horizontalSpacer_2_Main);


        verticalLayout_Main->addLayout(horizontalLayout_2_Main);

        horizontalLayout_3_Main = new QHBoxLayout();
        horizontalLayout_3_Main->setObjectName(QStringLiteral("horizontalLayout_3_Main"));
        threadsScriptVerifLabel = new QLabel(tabMain);
        threadsScriptVerifLabel->setObjectName(QStringLiteral("threadsScriptVerifLabel"));
        threadsScriptVerifLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_3_Main->addWidget(threadsScriptVerifLabel);

        threadsScriptVerif = new QSpinBox(tabMain);
        threadsScriptVerif->setObjectName(QStringLiteral("threadsScriptVerif"));

        horizontalLayout_3_Main->addWidget(threadsScriptVerif);

        horizontalSpacer_3_Main = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3_Main->addItem(horizontalSpacer_3_Main);


        verticalLayout_Main->addLayout(horizontalLayout_3_Main);

        verticalSpacer_Main = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_Main->addItem(verticalSpacer_Main);

        horizontalLayout_2_Main1 = new QHBoxLayout();
        horizontalLayout_2_Main1->setObjectName(QStringLiteral("horizontalLayout_2_Main1"));
        label = new QLabel(tabMain);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2_Main1->addWidget(label);

        darksendRounds = new QSpinBox(tabMain);
        darksendRounds->setObjectName(QStringLiteral("darksendRounds"));
        darksendRounds->setMinimum(2);
        darksendRounds->setMaximum(8);
        darksendRounds->setValue(4);

        horizontalLayout_2_Main1->addWidget(darksendRounds);


        verticalLayout_Main->addLayout(horizontalLayout_2_Main1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(tabMain);
        label_2->setObjectName(QStringLiteral("label_2"));
#ifndef QT_NO_STATUSTIP
        label_2->setStatusTip(QStringLiteral(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        label_2->setWhatsThis(QStringLiteral(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        label_2->setAccessibleName(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        label_2->setAccessibleDescription(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY

        horizontalLayout->addWidget(label_2);

        anonymizeDarkcoin = new QSpinBox(tabMain);
        anonymizeDarkcoin->setObjectName(QStringLiteral("anonymizeDarkcoin"));
        anonymizeDarkcoin->setMinimum(2);
        anonymizeDarkcoin->setMaximum(2000);
        anonymizeDarkcoin->setSingleStep(10);
        anonymizeDarkcoin->setValue(1000);

        horizontalLayout->addWidget(anonymizeDarkcoin);


        verticalLayout_Main->addLayout(horizontalLayout);

        tabWidget->addTab(tabMain, QString());
        tabMining = new QWidget();
        tabMining->setObjectName(QStringLiteral("tabMining"));
        verticalLayout_Mining = new QVBoxLayout(tabMining);
        verticalLayout_Mining->setObjectName(QStringLiteral("verticalLayout_Mining"));
        horizontalLayout_2_Mining = new QHBoxLayout();
        horizontalLayout_2_Mining->setObjectName(QStringLiteral("horizontalLayout_2_Mining"));
        labelMiningProcLimit = new QLabel(tabMining);
        labelMiningProcLimit->setObjectName(QStringLiteral("labelMiningProcLimit"));
        labelMiningProcLimit->setTextFormat(Qt::PlainText);

        horizontalLayout_2_Mining->addWidget(labelMiningProcLimit);

        comboMiningProcLimit = new QValueComboBox(tabMining);
        comboMiningProcLimit->setObjectName(QStringLiteral("comboMiningProcLimit"));

        horizontalLayout_2_Mining->addWidget(comboMiningProcLimit);


        verticalLayout_Mining->addLayout(horizontalLayout_2_Mining);

        verticalSpacer_Display1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_Mining->addItem(verticalSpacer_Display1);

        tabWidget->addTab(tabMining, QString());
        tabWallet = new QWidget();
        tabWallet->setObjectName(QStringLiteral("tabWallet"));
        verticalLayout_Wallet = new QVBoxLayout(tabWallet);
        verticalLayout_Wallet->setObjectName(QStringLiteral("verticalLayout_Wallet"));
        transactionFeeInfoLabel = new QLabel(tabWallet);
        transactionFeeInfoLabel->setObjectName(QStringLiteral("transactionFeeInfoLabel"));
        transactionFeeInfoLabel->setTextFormat(Qt::PlainText);
        transactionFeeInfoLabel->setWordWrap(true);

        verticalLayout_Wallet->addWidget(transactionFeeInfoLabel);

        horizontalLayout_1_Wallet = new QHBoxLayout();
        horizontalLayout_1_Wallet->setObjectName(QStringLiteral("horizontalLayout_1_Wallet"));
        transactionFeeLabel = new QLabel(tabWallet);
        transactionFeeLabel->setObjectName(QStringLiteral("transactionFeeLabel"));
        transactionFeeLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_1_Wallet->addWidget(transactionFeeLabel);

        transactionFee = new BitcoinAmountField(tabWallet);
        transactionFee->setObjectName(QStringLiteral("transactionFee"));

        horizontalLayout_1_Wallet->addWidget(transactionFee);

        horizontalSpacer_1_Wallet = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_1_Wallet->addItem(horizontalSpacer_1_Wallet);


        verticalLayout_Wallet->addLayout(horizontalLayout_1_Wallet);

        verticalSpacer_Wallet = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_Wallet->addItem(verticalSpacer_Wallet);

        groupBox = new QGroupBox(tabWallet);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        coinControlFeatures = new QCheckBox(groupBox);
        coinControlFeatures->setObjectName(QStringLiteral("coinControlFeatures"));

        verticalLayout_2->addWidget(coinControlFeatures);

        spendZeroConfChange = new QCheckBox(groupBox);
        spendZeroConfChange->setObjectName(QStringLiteral("spendZeroConfChange"));

        verticalLayout_2->addWidget(spendZeroConfChange);


        verticalLayout_Wallet->addWidget(groupBox);

        tabWidget->addTab(tabWallet, QString());
        tabNetwork = new QWidget();
        tabNetwork->setObjectName(QStringLiteral("tabNetwork"));
        verticalLayout_Network = new QVBoxLayout(tabNetwork);
        verticalLayout_Network->setObjectName(QStringLiteral("verticalLayout_Network"));
        mapPortUpnp = new QCheckBox(tabNetwork);
        mapPortUpnp->setObjectName(QStringLiteral("mapPortUpnp"));

        verticalLayout_Network->addWidget(mapPortUpnp);

        connectSocks = new QCheckBox(tabNetwork);
        connectSocks->setObjectName(QStringLiteral("connectSocks"));

        verticalLayout_Network->addWidget(connectSocks);

        horizontalLayout_1_Network = new QHBoxLayout();
        horizontalLayout_1_Network->setObjectName(QStringLiteral("horizontalLayout_1_Network"));
        proxyIpLabel = new QLabel(tabNetwork);
        proxyIpLabel->setObjectName(QStringLiteral("proxyIpLabel"));
        proxyIpLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_1_Network->addWidget(proxyIpLabel);

        proxyIp = new QValidatedLineEdit(tabNetwork);
        proxyIp->setObjectName(QStringLiteral("proxyIp"));
        proxyIp->setMinimumSize(QSize(140, 0));
        proxyIp->setMaximumSize(QSize(140, 16777215));

        horizontalLayout_1_Network->addWidget(proxyIp);

        proxyPortLabel = new QLabel(tabNetwork);
        proxyPortLabel->setObjectName(QStringLiteral("proxyPortLabel"));
        proxyPortLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_1_Network->addWidget(proxyPortLabel);

        proxyPort = new QLineEdit(tabNetwork);
        proxyPort->setObjectName(QStringLiteral("proxyPort"));
        proxyPort->setMinimumSize(QSize(55, 0));
        proxyPort->setMaximumSize(QSize(55, 16777215));

        horizontalLayout_1_Network->addWidget(proxyPort);

        socksVersionLabel = new QLabel(tabNetwork);
        socksVersionLabel->setObjectName(QStringLiteral("socksVersionLabel"));
        socksVersionLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_1_Network->addWidget(socksVersionLabel);

        socksVersion = new QValueComboBox(tabNetwork);
        socksVersion->setObjectName(QStringLiteral("socksVersion"));

        horizontalLayout_1_Network->addWidget(socksVersion);

        horizontalSpacer_1_Network = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_1_Network->addItem(horizontalSpacer_1_Network);


        verticalLayout_Network->addLayout(horizontalLayout_1_Network);

        verticalSpacer_Network = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_Network->addItem(verticalSpacer_Network);

        tabWidget->addTab(tabNetwork, QString());
        tabWindow = new QWidget();
        tabWindow->setObjectName(QStringLiteral("tabWindow"));
        verticalLayout_Window = new QVBoxLayout(tabWindow);
        verticalLayout_Window->setObjectName(QStringLiteral("verticalLayout_Window"));
        minimizeToTray = new QCheckBox(tabWindow);
        minimizeToTray->setObjectName(QStringLiteral("minimizeToTray"));

        verticalLayout_Window->addWidget(minimizeToTray);

        minimizeOnClose = new QCheckBox(tabWindow);
        minimizeOnClose->setObjectName(QStringLiteral("minimizeOnClose"));

        verticalLayout_Window->addWidget(minimizeOnClose);

        verticalSpacer_Window = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_Window->addItem(verticalSpacer_Window);

        tabWidget->addTab(tabWindow, QString());
        tabDisplay = new QWidget();
        tabDisplay->setObjectName(QStringLiteral("tabDisplay"));
        verticalLayout_Display = new QVBoxLayout(tabDisplay);
        verticalLayout_Display->setObjectName(QStringLiteral("verticalLayout_Display"));
        horizontalLayout_1_Display = new QHBoxLayout();
        horizontalLayout_1_Display->setObjectName(QStringLiteral("horizontalLayout_1_Display"));
        langLabel = new QLabel(tabDisplay);
        langLabel->setObjectName(QStringLiteral("langLabel"));
        langLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_1_Display->addWidget(langLabel);

        lang = new QValueComboBox(tabDisplay);
        lang->setObjectName(QStringLiteral("lang"));

        horizontalLayout_1_Display->addWidget(lang);


        verticalLayout_Display->addLayout(horizontalLayout_1_Display);

        label_3 = new QLabel(tabDisplay);
        label_3->setObjectName(QStringLiteral("label_3"));
#ifndef QT_NO_TOOLTIP
        label_3->setToolTip(QStringLiteral(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        label_3->setStatusTip(QStringLiteral(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        label_3->setWhatsThis(QStringLiteral(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        label_3->setAccessibleName(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        label_3->setWordWrap(true);
        label_3->setOpenExternalLinks(true);
        label_3->setTextInteractionFlags(Qt::TextBrowserInteraction);

        verticalLayout_Display->addWidget(label_3);

        horizontalLayout_4_Display = new QHBoxLayout();
        horizontalLayout_4_Display->setObjectName(QStringLiteral("horizontalLayout_4_Display"));
        themeLabel = new QLabel(tabDisplay);
        themeLabel->setObjectName(QStringLiteral("themeLabel"));

        horizontalLayout_4_Display->addWidget(themeLabel);

        theme = new QValueComboBox(tabDisplay);
        theme->setObjectName(QStringLiteral("theme"));

        horizontalLayout_4_Display->addWidget(theme);


        verticalLayout_Display->addLayout(horizontalLayout_4_Display);

        line = new QFrame(tabDisplay);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_Display->addWidget(line);

        horizontalLayout_2_Display = new QHBoxLayout();
        horizontalLayout_2_Display->setObjectName(QStringLiteral("horizontalLayout_2_Display"));
        unitLabel = new QLabel(tabDisplay);
        unitLabel->setObjectName(QStringLiteral("unitLabel"));
        unitLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_2_Display->addWidget(unitLabel);

        unit = new QValueComboBox(tabDisplay);
        unit->setObjectName(QStringLiteral("unit"));

        horizontalLayout_2_Display->addWidget(unit);


        verticalLayout_Display->addLayout(horizontalLayout_2_Display);

        displayAddresses = new QCheckBox(tabDisplay);
        displayAddresses->setObjectName(QStringLiteral("displayAddresses"));

        verticalLayout_Display->addWidget(displayAddresses);

        horizontalLayout_3_Display = new QHBoxLayout();
        horizontalLayout_3_Display->setObjectName(QStringLiteral("horizontalLayout_3_Display"));
        thirdPartyTxUrlsLabel = new QLabel(tabDisplay);
        thirdPartyTxUrlsLabel->setObjectName(QStringLiteral("thirdPartyTxUrlsLabel"));

        horizontalLayout_3_Display->addWidget(thirdPartyTxUrlsLabel);

        thirdPartyTxUrls = new QLineEdit(tabDisplay);
        thirdPartyTxUrls->setObjectName(QStringLiteral("thirdPartyTxUrls"));

        horizontalLayout_3_Display->addWidget(thirdPartyTxUrls);


        verticalLayout_Display->addLayout(horizontalLayout_3_Display);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_Display->addItem(verticalSpacer);

        tabWidget->addTab(tabDisplay, QString());

        verticalLayout->addWidget(tabWidget);

        frame = new QFrame(OptionsDialog);
        frame->setObjectName(QStringLiteral("frame"));
        verticalLayout_Bottom = new QVBoxLayout(frame);
        verticalLayout_Bottom->setObjectName(QStringLiteral("verticalLayout_Bottom"));
        horizontalLayout_Bottom = new QHBoxLayout();
        horizontalLayout_Bottom->setObjectName(QStringLiteral("horizontalLayout_Bottom"));
        overriddenByCommandLineInfoLabel = new QLabel(frame);
        overriddenByCommandLineInfoLabel->setObjectName(QStringLiteral("overriddenByCommandLineInfoLabel"));
        overriddenByCommandLineInfoLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_Bottom->addWidget(overriddenByCommandLineInfoLabel);

        horizontalSpacer_Bottom = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_Bottom->addItem(horizontalSpacer_Bottom);


        verticalLayout_Bottom->addLayout(horizontalLayout_Bottom);

        overriddenByCommandLineLabel = new QLabel(frame);
        overriddenByCommandLineLabel->setObjectName(QStringLiteral("overriddenByCommandLineLabel"));
        overriddenByCommandLineLabel->setTextFormat(Qt::PlainText);
        overriddenByCommandLineLabel->setWordWrap(true);

        verticalLayout_Bottom->addWidget(overriddenByCommandLineLabel);


        verticalLayout->addWidget(frame);

        horizontalLayout_Buttons = new QHBoxLayout();
        horizontalLayout_Buttons->setObjectName(QStringLiteral("horizontalLayout_Buttons"));
        resetButton = new QPushButton(OptionsDialog);
        resetButton->setObjectName(QStringLiteral("resetButton"));
        resetButton->setAutoDefault(false);

        horizontalLayout_Buttons->addWidget(resetButton);

        horizontalSpacer_1 = new QSpacerItem(40, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_Buttons->addItem(horizontalSpacer_1);

        statusLabel = new QLabel(OptionsDialog);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));
        statusLabel->setMinimumSize(QSize(200, 0));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        statusLabel->setFont(font);
        statusLabel->setTextFormat(Qt::PlainText);
        statusLabel->setWordWrap(true);

        horizontalLayout_Buttons->addWidget(statusLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_Buttons->addItem(horizontalSpacer_2);

        okButton = new QPushButton(OptionsDialog);
        okButton->setObjectName(QStringLiteral("okButton"));

        horizontalLayout_Buttons->addWidget(okButton);

        cancelButton = new QPushButton(OptionsDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setAutoDefault(false);

        horizontalLayout_Buttons->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout_Buttons);

#ifndef QT_NO_SHORTCUT
        databaseCacheLabel->setBuddy(databaseCache);
        threadsScriptVerifLabel->setBuddy(threadsScriptVerif);
        labelMiningProcLimit->setBuddy(comboMiningProcLimit);
        transactionFeeLabel->setBuddy(transactionFee);
        proxyIpLabel->setBuddy(proxyIp);
        proxyPortLabel->setBuddy(proxyPort);
        socksVersionLabel->setBuddy(socksVersion);
        langLabel->setBuddy(lang);
        unitLabel->setBuddy(unit);
        thirdPartyTxUrlsLabel->setBuddy(thirdPartyTxUrls);
#endif // QT_NO_SHORTCUT

        retranslateUi(OptionsDialog);

        tabWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(OptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *OptionsDialog)
    {
        OptionsDialog->setWindowTitle(QApplication::translate("OptionsDialog", "Options", 0));
#ifndef QT_NO_TOOLTIP
        bitcoinAtStartup->setToolTip(QApplication::translate("OptionsDialog", "Automatically start PatriotBit after logging in to the system.", 0));
#endif // QT_NO_TOOLTIP
        bitcoinAtStartup->setText(QApplication::translate("OptionsDialog", "&Start PatriotBit on system login", 0));
        databaseCacheLabel->setText(QApplication::translate("OptionsDialog", "Size of &database cache", 0));
        databaseCacheUnitLabel->setText(QApplication::translate("OptionsDialog", "MB", 0));
        threadsScriptVerifLabel->setText(QApplication::translate("OptionsDialog", "Number of script &verification threads", 0));
#ifndef QT_NO_TOOLTIP
        threadsScriptVerif->setToolTip(QApplication::translate("OptionsDialog", "(0 = auto, <0 = leave that many cores free)", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("OptionsDialog", "<html><head/><body><p>This setting determines the amount of individual masternodes that an input will be anonymized through. More rounds of anonymization gives a higher degree of privacy, but also costs more in fees.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("OptionsDialog", "FreedomSend rounds to use", 0));
#ifndef QT_NO_TOOLTIP
        label_2->setToolTip(QApplication::translate("OptionsDialog", "This amount acts as a threshold to turn off Darksend once it's reached.", 0));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("OptionsDialog", "Amount of PatriotBit to keep anonymized", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabMain), QApplication::translate("OptionsDialog", "&Main", 0));
        labelMiningProcLimit->setText(QApplication::translate("OptionsDialog", "&Prospecting threads:", 0));
#ifndef QT_NO_TOOLTIP
        comboMiningProcLimit->setToolTip(QApplication::translate("OptionsDialog", "Choose the default mining threads.", 0));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tabMining), QApplication::translate("OptionsDialog", "&Prospecting", 0));
        transactionFeeInfoLabel->setText(QApplication::translate("OptionsDialog", "Optional transaction fee per kB that helps make sure your transactions are processed quickly. Most transactions are 1 kB.", 0));
        transactionFeeLabel->setText(QApplication::translate("OptionsDialog", "Pay transaction &fee", 0));
        groupBox->setTitle(QApplication::translate("OptionsDialog", "Expert", 0));
#ifndef QT_NO_TOOLTIP
        coinControlFeatures->setToolTip(QApplication::translate("OptionsDialog", "Whether to show coin control features or not.", 0));
#endif // QT_NO_TOOLTIP
        coinControlFeatures->setText(QApplication::translate("OptionsDialog", "Enable coin &control features", 0));
#ifndef QT_NO_TOOLTIP
        spendZeroConfChange->setToolTip(QApplication::translate("OptionsDialog", "If you disable the spending of unconfirmed change, the change from a transaction cannot be used until that transaction has at least one confirmation. This also affects how your balance is computed.", 0));
#endif // QT_NO_TOOLTIP
        spendZeroConfChange->setText(QApplication::translate("OptionsDialog", "&Spend unconfirmed change", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabWallet), QApplication::translate("OptionsDialog", "W&allet", 0));
#ifndef QT_NO_TOOLTIP
        mapPortUpnp->setToolTip(QApplication::translate("OptionsDialog", "Automatically open the PatriotBit client port on the router. This only works when your router supports UPnP and it is enabled.", 0));
#endif // QT_NO_TOOLTIP
        mapPortUpnp->setText(QApplication::translate("OptionsDialog", "Map port using &UPnP", 0));
#ifndef QT_NO_TOOLTIP
        connectSocks->setToolTip(QApplication::translate("OptionsDialog", "Connect to the PatriotBit network through a SOCKS proxy.", 0));
#endif // QT_NO_TOOLTIP
        connectSocks->setText(QApplication::translate("OptionsDialog", "&Connect through SOCKS proxy (default proxy):", 0));
        proxyIpLabel->setText(QApplication::translate("OptionsDialog", "Proxy &IP:", 0));
#ifndef QT_NO_TOOLTIP
        proxyIp->setToolTip(QApplication::translate("OptionsDialog", "IP address of the proxy (e.g. IPv4: 127.0.0.1 / IPv6: ::1)", 0));
#endif // QT_NO_TOOLTIP
        proxyPortLabel->setText(QApplication::translate("OptionsDialog", "&Port:", 0));
#ifndef QT_NO_TOOLTIP
        proxyPort->setToolTip(QApplication::translate("OptionsDialog", "Port of the proxy (e.g. 9050)", 0));
#endif // QT_NO_TOOLTIP
        socksVersionLabel->setText(QApplication::translate("OptionsDialog", "SOCKS &Version:", 0));
#ifndef QT_NO_TOOLTIP
        socksVersion->setToolTip(QApplication::translate("OptionsDialog", "SOCKS version of the proxy (e.g. 5)", 0));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tabNetwork), QApplication::translate("OptionsDialog", "&Network", 0));
#ifndef QT_NO_TOOLTIP
        minimizeToTray->setToolTip(QApplication::translate("OptionsDialog", "Show only a tray icon after minimizing the window.", 0));
#endif // QT_NO_TOOLTIP
        minimizeToTray->setText(QApplication::translate("OptionsDialog", "&Minimize to the tray instead of the taskbar", 0));
#ifndef QT_NO_TOOLTIP
        minimizeOnClose->setToolTip(QApplication::translate("OptionsDialog", "Minimize instead of exit the application when the window is closed. When this option is enabled, the application will be closed only after selecting Quit in the menu.", 0));
#endif // QT_NO_TOOLTIP
        minimizeOnClose->setText(QApplication::translate("OptionsDialog", "M&inimize on close", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabWindow), QApplication::translate("OptionsDialog", "&Window", 0));
        langLabel->setText(QApplication::translate("OptionsDialog", "User Interface &language:", 0));
#ifndef QT_NO_TOOLTIP
        lang->setToolTip(QApplication::translate("OptionsDialog", "The user interface language can be set here. This setting will take effect after restarting PatriotBit.", 0));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("OptionsDialog", "Language missing or translation incomplete? Help contributing translations here:\n"
"https://www.transifex.com/projects/p/patriotbit/", 0));
        themeLabel->setText(QApplication::translate("OptionsDialog", "User Interface Theme:", 0));
        unitLabel->setText(QApplication::translate("OptionsDialog", "&Unit to show amounts in:", 0));
#ifndef QT_NO_TOOLTIP
        unit->setToolTip(QApplication::translate("OptionsDialog", "Choose the default subdivision unit to show in the interface and when sending coins.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        displayAddresses->setToolTip(QApplication::translate("OptionsDialog", "Whether to show PatriotBit addresses in the transaction list or not.", 0));
#endif // QT_NO_TOOLTIP
        displayAddresses->setText(QApplication::translate("OptionsDialog", "&Display addresses in transaction list", 0));
#ifndef QT_NO_TOOLTIP
        thirdPartyTxUrlsLabel->setToolTip(QApplication::translate("OptionsDialog", "Third party URLs (e.g. a block explorer) that appear in the transactions tab as context menu items. %s in the URL is replaced by transaction hash. Multiple URLs are separated by vertical bar |.", 0));
#endif // QT_NO_TOOLTIP
        thirdPartyTxUrlsLabel->setText(QApplication::translate("OptionsDialog", "Third party transaction URLs", 0));
#ifndef QT_NO_TOOLTIP
        thirdPartyTxUrls->setToolTip(QApplication::translate("OptionsDialog", "Third party URLs (e.g. a block explorer) that appear in the transactions tab as context menu items. %s in the URL is replaced by transaction hash. Multiple URLs are separated by vertical bar |.", 0));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tabDisplay), QApplication::translate("OptionsDialog", "&Display", 0));
        overriddenByCommandLineInfoLabel->setText(QApplication::translate("OptionsDialog", "Active command-line options that override above options:", 0));
        overriddenByCommandLineLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        resetButton->setToolTip(QApplication::translate("OptionsDialog", "Reset all client options to default.", 0));
#endif // QT_NO_TOOLTIP
        resetButton->setText(QApplication::translate("OptionsDialog", "&Reset Options", 0));
        statusLabel->setText(QString());
        okButton->setText(QApplication::translate("OptionsDialog", "&OK", 0));
        cancelButton->setText(QApplication::translate("OptionsDialog", "&Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class OptionsDialog: public Ui_OptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONSDIALOG_H
