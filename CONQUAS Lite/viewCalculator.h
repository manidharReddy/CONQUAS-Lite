//
//  viewCalculator.h
//  CONQUAS Lite
//
//  Created by Eric Teng on 29/6/12.
//  Copyright (c) 2012 MobTwo Pte Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "sqlite3.h"

@interface viewCalculator : UIViewController {
    IBOutlet UIScrollView *viewScrollCalculator;
    IBOutlet UIScrollView *svSavedInformation;
    IBOutlet UIView *viewSampleInfomation;
    IBOutlet UIView *viewCeiling;
    IBOutlet UIView *viewComponent;
    IBOutlet UIView *viewDoor;
    IBOutlet UIView *viewFloor;
    IBOutlet UIView *viewME;
    IBOutlet UIView *viewWall;
    IBOutlet UIView *viewWindow;
    IBOutlet UILabel *lblEditionNumber;
    IBOutlet UISlider *editionNumber;
    IBOutlet UITextField *txtBlkNumber;
    IBOutlet UITextField *txtStoreyNumber;
    IBOutlet UITextField *txtUnitNumber;
    IBOutlet UITextField *txtLocationName;
    IBOutlet UITextField *txtCeilingFinishingTicks;
    IBOutlet UITextField *txtCeilingFinishingChecks;
    IBOutlet UITextField *txtCeilingAETicks;
    IBOutlet UITextField *txtCeilingAEChecks;
    IBOutlet UITextField *txtCeilingCDTicks;
    IBOutlet UITextField *txtCeilingCDChecks;
    IBOutlet UITextField *txtCeilingRoughnessTicks;
    IBOutlet UITextField *txtCeilingRoughnessChecks;
    IBOutlet UITextField *txtCeilingJointingTicks;
    IBOutlet UITextField *txtCeilingJointingChecks;
    IBOutlet UITextField *txtComponentJPTicks;
    IBOutlet UITextField *txtComponentJPChecks;
    IBOutlet UITextField *txtComponentAETicks;
    IBOutlet UITextField *txtComponentAEChecks;
    IBOutlet UITextField *txtComponentMDTicks;
    IBOutlet UITextField *txtComponentMDChecks;
    IBOutlet UITextField *txtComponentFunctionalityTicks;
    IBOutlet UITextField *txtComponentFunctionalityChecks;
    IBOutlet UITextField *txtComponentADTicks;
    IBOutlet UITextField *txtComponentADChecks;
    IBOutlet UITextField *txtDoorJPTicks;
    IBOutlet UITextField *txtDoorJPChecks;
    IBOutlet UITextField *txtDoorAETicks;
    IBOutlet UITextField *txtDoorAEChecks;
    IBOutlet UITextField *txtDoorMDTicks;
    IBOutlet UITextField *txtDoorMDChecks;
    IBOutlet UITextField *txtDoorFunctionalityTicks;
    IBOutlet UITextField *txtDoorFunctionalityChecks;
    IBOutlet UITextField *txtDoorADTicks;
    IBOutlet UITextField *txtDoorADChecks;
    IBOutlet UITextField *txtFloorFinishingTicks;
    IBOutlet UITextField *txtFloorFinishingChecks;
    IBOutlet UITextField *txtFloorAETicks;
    IBOutlet UITextField *txtFloorAEChecks;
    IBOutlet UITextField *txtFloorCDTicks;
    IBOutlet UITextField *txtFloorCDChecks;
    IBOutlet UITextField *txtFloorHollownessTicks;
    IBOutlet UITextField *txtFloorHollownessChecks;
    IBOutlet UITextField *txtFloorJointingTicks;
    IBOutlet UITextField *txtFloorJointingChecks;
    IBOutlet UITextField *txtMEJPTicks;
    IBOutlet UITextField *txtMEJPChecks;
    IBOutlet UITextField *txtMEAETicks;
    IBOutlet UITextField *txtMEAEChecks;
    IBOutlet UITextField *txtMEMDTicks;
    IBOutlet UITextField *txtMEMDChecks;
    IBOutlet UITextField *txtMEFunctionalityTicks;
    IBOutlet UITextField *txtMEFunctionalityChecks;
    IBOutlet UITextField *txtMEADTicks;
    IBOutlet UITextField *txtMEADChecks;
    IBOutlet UITextField *txtWallFinishingTicks;
    IBOutlet UITextField *txtWallFinishingChecks;
    IBOutlet UITextField *txtWallAETicks;
    IBOutlet UITextField *txtWallAEChecks;
    IBOutlet UITextField *txtWallCDTicks;
    IBOutlet UITextField *txtWallCDChecks;
    IBOutlet UITextField *txtWallHollownessTicks;
    IBOutlet UITextField *txtWallHollownessChecks;
    IBOutlet UITextField *txtWallJointingTicks;
    IBOutlet UITextField *txtWallJointingChecks;
    IBOutlet UITextField *txtWindowJGTicks;
    IBOutlet UITextField *txtWindowJGChecks;
    IBOutlet UITextField *txtWindowAETicks;
    IBOutlet UITextField *txtWindowAEChecks;
    IBOutlet UITextField *txtWindowMDTicks;
    IBOutlet UITextField *txtWindowMDChecks;
    IBOutlet UITextField *txtWindowFunctionalityTicks;
    IBOutlet UITextField *txtWindowFunctionalityChecks;
    IBOutlet UITextField *txtWindowADTicks;
    IBOutlet UITextField *txtWindowADChecks;
    IBOutlet UILabel *lblScore;
    IBOutlet UIButton *btnSave;
    IBOutlet UIButton *btnReset;
    BOOL isKeyboardShown;
    UIImage *numberPadDoneImageNormal;
    UIImage *numberPadDoneImageHighlighted;
    UIButton *numberPadDoneButton;
    sqlite3 *CONQUASDB;
    NSString *databasePath;
    NSString *elementType;
    NSString *defectType;
    NSString *numTicks;
    NSString *numChecks;
    IBOutlet UIButton *btnEdition6, *btnEdition7, *btnEdition8;
    IBOutlet UIButton *btnSummary, *btnMain, *btnCeiling, *btnComponent, *btnDoor, *btnFloor, *btnMAndE, *btnWall, *btnWindow;
    IBOutlet UITextField *txtProjectID, *txtProjectName;
}

@property (retain) NSString *elementType;
@property (retain) NSString *defectType;
@property (retain) NSString *numTicks;
@property (retain) NSString *numChecks;
@property (retain) UITextField *txtCeilingFinishingTicks;
@property (retain) UITextField *txtCeilingFinishingChecks;
@property (retain) UITextField *txtCeilingAETicks;
@property (retain) UITextField *txtCeilingAEChecks;
@property (retain) UITextField *txtCeilingCDTicks;
@property (retain) UITextField *txtCeilingCDChecks;
@property (retain) UITextField *txtCeilingRoughnessTicks;
@property (retain) UITextField *txtCeilingRoughnessChecks;
@property (retain) UITextField *txtCeilingJointingTicks;
@property (retain) UITextField *txtCeilingJointingChecks;
@property (retain) UITextField *txtComponentJPTicks;
@property (retain) UITextField *txtComponentJPChecks;
@property (retain) UITextField *txtComponentAETicks;
@property (retain) UITextField *txtComponentAEChecks;
@property (retain) UITextField *txtComponentMDTicks;
@property (retain) UITextField *txtComponentMDChecks;
@property (retain) UITextField *txtComponentFunctionalityTicks;
@property (retain) UITextField *txtComponentFunctionalityChecks;
@property (retain) UITextField *txtComponentADTicks;
@property (retain) UITextField *txtComponentADChecks;
@property (retain) UITextField *txtDoorJPTicks;
@property (retain) UITextField *txtDoorJPChecks;
@property (retain) UITextField *txtDoorAETicks;
@property (retain) UITextField *txtDoorAEChecks;
@property (retain) UITextField *txtDoorMDTicks;
@property (retain) UITextField *txtDoorMDChecks;
@property (retain) UITextField *txtDoorFunctionalityTicks;
@property (retain) UITextField *txtDoorFunctionalityChecks;
@property (retain) UITextField *txtDoorADTicks;
@property (retain) UITextField *txtDoorADChecks;
@property (retain) UITextField *txtFloorFinishingTicks;
@property (retain) UITextField *txtFloorFinishingChecks;
@property (retain) UITextField *txtFloorAETicks;
@property (retain) UITextField *txtFloorAEChecks;
@property (retain) UITextField *txtFloorCDTicks;
@property (retain) UITextField *txtFloorCDChecks;
@property (retain) UITextField *txtFloorHollownessTicks;
@property (retain) UITextField *txtFloorHollownessChecks;
@property (retain) UITextField *txtFloorJointingTicks;
@property (retain) UITextField *txtFloorJointingChecks;
@property (retain) UITextField *txtMEJPTicks;
@property (retain) UITextField *txtMEJPChecks;
@property (retain) UITextField *txtMEAETicks;
@property (retain) UITextField *txtMEAEChecks;
@property (retain) UITextField *txtMEMDTicks;
@property (retain) UITextField *txtMEMDChecks;
@property (retain) UITextField *txtMEFunctionalityTicks;
@property (retain) UITextField *txtMEFunctionalityChecks;
@property (retain) UITextField *txtMEADTicks;
@property (retain) UITextField *txtMEADChecks;
@property (retain) UITextField *txtWallFinishingTicks;
@property (retain) UITextField *txtWallFinishingChecks;
@property (retain) UITextField *txtWallAETicks;
@property (retain) UITextField *txtWallAEChecks;
@property (retain) UITextField *txtWallCDTicks;
@property (retain) UITextField *txtWallCDChecks;
@property (retain) UITextField *txtWallHollownessTicks;
@property (retain) UITextField *txtWallHollownessChecks;
@property (retain) UITextField *txtWallJointingTicks;
@property (retain) UITextField *txtWallJointingChecks;
@property (retain) UITextField *txtWindowJGTicks;
@property (retain) UITextField *txtWindowJGChecks;
@property (retain) UITextField *txtWindowAETicks;
@property (retain) UITextField *txtWindowAEChecks;
@property (retain) UITextField *txtWindowMDTicks;
@property (retain) UITextField *txtWindowMDChecks;
@property (retain) UITextField *txtWindowFunctionalityTicks;
@property (retain) UITextField *txtWindowFunctionalityChecks;
@property (retain) UITextField *txtWindowADTicks;
@property (retain) UITextField *txtWindowADChecks;
@property (nonatomic, retain) UIScrollView *viewScrollCalculator;
@property (nonatomic, retain) UIImage *numberPadDoneImageNormal;
@property (nonatomic, retain) UIImage *numberPadDoneImageHighlighted;
@property (nonatomic, retain) UIButton *numberPadDoneButton;

-(IBAction)btnDismissKeyboard:(id)sender;
-(IBAction)numberPadDoneButton:(id)sender;
-(IBAction)calculateScore:(id)sender;
-(IBAction)saveInternalFinishesData:(id)sender;
-(IBAction)resetScore:(id)sender;
-(IBAction)btnEditionClicked:(id)sender;
-(BOOL)isNumeric:(NSString *)strValue;
-(void)retrieveSavedInformation:(id)sender;
-(void)sampleEdit:(id)sender;
-(void)sampleDelete:(id)sender;
- (IBAction)btnScreenClicked:(id)sender;

@end

@interface UIViewController (NumPadReturn)
@end