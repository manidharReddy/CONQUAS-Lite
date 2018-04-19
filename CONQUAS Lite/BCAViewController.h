//
//  BCAViewController.h
//  CONQUAS Lite
//
//  Created by Eric Teng on 29/6/12.
//  Copyright (c) 2012 MobTwo Pte Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

NSString *strWSURL = @"http://103.247.132.195/BCA/AppCONQUAS/";

@interface BCAViewController : UIViewController {
    //---web service access---
    
    
    NSMutableData *webData;
    NSMutableString *soapResults;
    NSURLConnection *conn;
    NSString *postString;
    NSURL *url;
    NSMutableURLRequest *req;
    //---plist access---
    NSArray *paths;
    NSString *documentsDirectory;
    NSString *path;
    NSFileManager *fileManager;
    NSMutableDictionary *data;
    //---xml parsing---
    NSXMLParser *xmlParser;
    BOOL elementFound;
    //---outlets---
    IBOutlet UIActivityIndicatorView *activityIndicator;
    IBOutlet UIScrollView *svScrollView;
    IBOutlet UITextField *txtUserName;
    IBOutlet UITextField *txtUserEmail;
    IBOutlet UITextField *txtUserMobileNumber;
    IBOutlet UITextView *txtFeedbackDescription;
    IBOutlet UITextField *txtKeywords;
    IBOutlet UIWebView *wvDisplay;
    IBOutlet UIButton *btnCloseWVDisplay;
    IBOutlet UIButton *ggbaCalc;
    IBOutlet UITextField *txtGreen1, *txtGreen2, *txtGreen3, *txtGreen4, *txtGreen5, *txtGreen6, *txtGreen7, *txtGreen8, *txtGreen9, *txtGreen10, *txtGreen11, *txtGreen12, *txtGreen13, *txtGreen14, *txtGreen15, *txtGreen16, *txtGreen17, *txtGreen18, *txtGreen19, *txtGreen20, *txtGreen21, *txtGreen22, *txtGreen23;
    IBOutlet UITextField *txtGracious1, *txtGracious2, *txtGracious3, *txtGracious4, *txtGracious5, *txtGracious6, *txtGracious7, *txtGracious8, *txtGracious9, *txtGracious10, *txtGracious11, *txtGracious12, *txtGracious13, *txtGracious14, *txtGracious15, *txtGracious16, *txtGracious17, *txtGracious18, *txtGracious19, *txtGracious20, *txtGracious21, *txtGracious22, *txtGracious23, *txtGracious24, *txtGracious25, *txtGracious26, *txtGracious27, *txtGracious28, *txtGracious29, *txtGracious30, *txtGracious31, *txtGracious32, *txtGracious33;
    IBOutlet UITextField *txtInnovation1;
    IBOutlet UITextField *txtBonus1;
    IBOutlet UIScrollView *svGreen, *svGracious, *svInnovation, *svBonus, *svSummary;
    IBOutlet UILabel *lblGreenPoints, *lblGraciousPoints, *lblInnovationPoints, *lblBonusPoints, *lblTotalPoints, *lblScore, *lblMainPoints;
    NSString *userID;
    NSString *userLoginString;
    NSString *errorID;
    NSString *errorMessage;
    NSString *action;
    NSString *userName;
    NSString *userEmail;
    NSString *userMobileNumber;
    
    UIPageViewController *vcPopupTips;
}


@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;

- (IBAction)btnggbaCalc:(id)sender;


-(IBAction)btnDismissKeyboard:(id)sender;
-(IBAction)btnFacebook;
-(IBAction)btnCQMOnline:(id)sender;
-(IBAction)btnSearchSubmitClicked:(id)sender;
-(IBAction)btnSearchResetClicked:(id)sender;
-(IBAction)btnMyProfileSaveClicked:(id)sender;
-(IBAction)btnMyProfileResetClicked:(id)sender;
-(IBAction)btnFeedbackSendClicked:(id)sender;
-(IBAction)btnFeedbackResetClicked:(id)sender;
-(IBAction)btnTipsClicked:(id)sender;
-(IBAction)btnGGBSBookClicked:(id)sender;
-(IBAction)btnGGBSApplicationFormClicked:(id)sender;
-(IBAction)btnGGBSIndustryKPIClicked:(id)sender;
-(IBAction)btnGGBSKPIWeightageClicked:(id)sender;
-(IBAction)btnChecklistAluminiumWindowsClicked:(id)sender;
-(IBAction)btnChecklistCeramicTilingClicked:(id)sender;
-(IBAction)btnChecklistConquasSubmissionClicked:(id)sender;
-(IBAction)btnChecklistGGBAClicked:(id)sender;
-(IBAction)btnChecklistMarbleAndGraniteFinishesClicked:(id)sender;
-(IBAction)btnChecklistTimberFlooringClicked:(id)sender;
-(IBAction)btnChecklistWaterproofingClicked:(id)sender;
-(IBAction)btnChecklistFormAClicked:(id)sender;
-(IBAction)btnChecklistFormBClicked:(id)sender;
-(IBAction)btnChecklistFormCClicked:(id)sender;
-(IBAction)btnChecklistFormDClicked:(id)sender;
-(IBAction)btnChecklistFormEClicked:(id)sender;
-(IBAction)btnChecklistFormFClicked:(id)sender;
-(IBAction)btnConquasScore:(id)sender;
-(IBAction)btnCloseWVDisplayClicked:(id)sender;
-(IBAction)showGGBAItemInformation:(id)sender;
-(IBAction)updateGGBAScore:(id)sender;
-(IBAction)btnGGBAButtonsClicked:(id)sender;

@end
