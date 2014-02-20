//
//  ICFFriendEditViewController.h
//  MyMovies
//
//  Created by Joe Keeley on 7/9/12.
//  Copyright (c) 2012 Explore Systems, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ICFFriendEditViewController : UITableViewController

@property (nonatomic, retain) NSManagedObjectID *editFriendID;
@property (nonatomic, retain) IBOutlet UITextField *friendName;

- (IBAction)saveButtonTouched:(id)sender;
- (IBAction)cancelButtonTouched:(id)sender;

@end
