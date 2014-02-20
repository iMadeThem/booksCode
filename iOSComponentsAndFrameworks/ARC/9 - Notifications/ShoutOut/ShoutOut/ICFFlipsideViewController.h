//
//  ICFFlipsideViewController.h
//  ShoutOut
//
//  Created by Joe Keeley on 3/11/12.
//  Copyright (c) 2012 Explore Systems, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ICFFlipsideViewController;

@protocol ICFFlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(ICFFlipsideViewController *)controller;
@end

@interface ICFFlipsideViewController : UIViewController <UITextFieldDelegate>
{
    
    
}

@property (weak, nonatomic) IBOutlet id <ICFFlipsideViewControllerDelegate> delegate;
@property (strong, nonatomic) IBOutlet UITextField *shoutTextField;
@property (strong, nonatomic) IBOutlet UIWebView *shoutsWebView;
@property (strong, nonatomic) NSString *shoutName;
@property (strong, nonatomic) IBOutlet UIView *activityView;
@property (strong, nonatomic) IBOutlet UIActivityIndicatorView *activityIndicator;
@property (strong, nonatomic) IBOutlet UILabel *activityLabel;

- (IBAction)done:(id)sender;

@end
