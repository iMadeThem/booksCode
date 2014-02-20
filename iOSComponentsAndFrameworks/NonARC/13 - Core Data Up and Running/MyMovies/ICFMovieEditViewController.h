//
//  ICFMovieEditViewController.h
//  MyMovies
//
//  Created by Joe Keeley on 7/5/12.
//  Copyright (c) 2012 Explore Systems, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ICFYearChooserViewController.h"
#import "ICFDateChooserViewController.h"
#import "ICFFriendChooserViewController.h"
#import "ICFMovie.h"

@protocol ICFMovieEditDelegate <NSObject>
- (void)movieChanged:(ICFMovie *)movie;
@end

@interface ICFMovieEditViewController : UITableViewController <ICFYearChooserDelegate, ICFDateChooserDelegate, ICFFriendChooserDelegate, UITextFieldDelegate, UITextViewDelegate>

@property (nonatomic, retain) NSManagedObjectID *editMovieID;
@property (nonatomic, retain) IBOutlet UITextField *movieTitle;
@property (nonatomic, retain) IBOutlet UILabel *movieYearLabel;
@property (nonatomic, retain) IBOutlet UITextView *movieDescription;
@property (nonatomic, retain) IBOutlet UISwitch *sharedSwitch;
@property (nonatomic, retain) IBOutlet UILabel *sharedFriendLabel;
@property (nonatomic, retain) IBOutlet UILabel *sharedOnDateLabel;
@property (nonatomic, retain) IBOutlet UITableViewCell *sharedFriendCell;
@property (nonatomic, retain) IBOutlet UITableViewCell *sharedDateCell;
@property (nonatomic, assign) id<ICFMovieEditDelegate> delegate;

- (IBAction)saveButtonTouched:(id)sender;
- (IBAction)cancelButtonTouched:(id)sender;
- (IBAction)sharedSwitchChanged:(id)sender;

@end
