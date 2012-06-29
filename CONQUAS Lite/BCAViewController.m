//
//  BCAViewController.m
//  CONQUAS Lite
//
//  Created by Eric Teng on 29/6/12.
//  Copyright (c) 2012 MobTwo Pte Ltd. All rights reserved.
//

#import "BCAViewController.h"

@interface BCAViewController ()

@end

@implementation BCAViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)viewDidUnload
{
    [super viewDidUnload];
    // Release any retained subviews of the main view.
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    if ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPhone) {
        return (interfaceOrientation != UIInterfaceOrientationPortraitUpsideDown);
    } else {
        return YES;
    }
}

@end
