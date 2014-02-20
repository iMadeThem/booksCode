//
//  ICFMainViewController.h
//  ShoutOut
//
//  Created by Joe Keeley on 3/11/12.
//  Copyright (c) 2012 Explore Systems, Inc. All rights reserved.
//

#import "ICFFlipsideViewController.h"

@interface ICFMainViewController : UIViewController <ICFFlipsideViewControllerDelegate, UITextFieldDelegate>
{
    
    
}

@property (strong, nonatomic) IBOutlet UITextField *userNameTextField;
@property (strong, nonatomic) IBOutlet UIView *activityView;
@property (strong, nonatomic) IBOutlet UIActivityIndicatorView *activityIndicator;

- (IBAction)showInfo:(id)sender;
- (IBAction)setReminder:(id)sender;

@end
