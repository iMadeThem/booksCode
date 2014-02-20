//
//  ICFYearChooserViewController.h
//  MyMovies
//
//  Created by Joe Keeley on 7/7/12.
//  Copyright (c) 2012 Explore Systems, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol ICFYearChooserDelegate <NSObject>
- (void)chooserSelectedYear:(NSString *)year;
@end

@interface ICFYearChooserViewController : UITableViewController <UIPickerViewDataSource, UIPickerViewDelegate>

@property (retain, nonatomic) IBOutlet UILabel *chooserValueLabel;
@property (retain, nonatomic) IBOutlet UIPickerView *pickerView;
@property (retain, nonatomic) NSString *selectedYear;
@property (retain, nonatomic) NSArray *yearThousands;
@property (retain, nonatomic) NSArray *yearTens;
@property (retain, nonatomic) NSArray *yearOnes;
@property (assign, nonatomic) id<ICFYearChooserDelegate> delegate;

- (IBAction)saveButtonTouched:(id)sender;

@end

