//
//  ICFDateChooserViewController.h
//  MyMovies
//
//  Created by Joe Keeley on 7/7/12.
//  Copyright (c) 2012 Explore Systems, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol ICFDateChooserDelegate <NSObject>
- (void)chooserSelectedDate:(NSDate *)date;
@end

@interface ICFDateChooserViewController : UITableViewController

@property (retain, nonatomic) IBOutlet UILabel *chooserValueLabel;
@property (retain, nonatomic) IBOutlet UIDatePicker *datePickerView;
@property (retain, nonatomic) NSDate *selectedDate;
@property (retain, nonatomic) NSDateFormatter *df;
@property (assign, nonatomic) id<ICFDateChooserDelegate> delegate;

- (IBAction)saveButtonTouched:(id)sender;
- (IBAction)datePickerValueChanged:(id)sender;

@end
