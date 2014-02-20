//
//  ICFConflictVersionViewController.h
//  MyNotes
//
//  Created by Joe Keeley on 10/28/12.
//  Copyright (c) 2012 Joe Keeley. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol ICFConflictResolutionDelegate;

@interface ICFConflictVersionViewController : UIViewController

@property (nonatomic, retain) IBOutlet UILabel *versionLabel;
@property (nonatomic, retain) IBOutlet UILabel *versionDate;
@property (nonatomic, retain) IBOutlet UILabel *versionComputer;
@property (nonatomic, retain) NSFileVersion *fileVersion;
@property (nonatomic, assign) id<ICFConflictResolutionDelegate> delegate;

- (IBAction)selectVersionTouched:(id)sender;

@end

@protocol ICFConflictResolutionDelegate <NSObject>

- (void)conflictVersionSelected:(NSFileVersion *)selectedVersion;

@end