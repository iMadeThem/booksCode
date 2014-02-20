//
//  ICFViewController.h
//  ImagePlayground
//
//  Created by Joe Keeley on 11/3/12.
//  Copyright (c) 2012 Joe Keeley. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol ICFFilterProcessingDelegate <NSObject>

- (void)addFilter:(CIFilter *)filter;
- (void)cancelAddingFilter;
- (UIImage *)imageWithLastFilterApplied;
- (UIPopoverController *)currentPopoverController;
- (UINavigationController *)currentFilterController;

@end


@interface ICFViewController : UIViewController <ICFFilterProcessingDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIPopoverControllerDelegate>

@property (nonatomic, retain) IBOutlet UIView *sourceImageContainer;
@property (nonatomic, retain) IBOutlet UIImageView *sourceImageView;
@property (nonatomic, retain) IBOutlet UIView *resultImageContainer;
@property (nonatomic, retain) IBOutlet UIImageView *resultImageView;
@property (nonatomic, retain) IBOutlet UIView *filterListContainer;
@property (nonatomic, retain) IBOutlet UITableView *filterList;
@property (nonatomic, retain) IBOutlet UITextView *faceInfoTextView;
@property (nonatomic, retain) IBOutlet UIButton *selectImageButton;
@property (nonatomic, retain) IBOutlet UIButton *takePhotoButton;
@property (nonatomic, retain) UIPopoverController *filterPopoverController;
@property (nonatomic, retain) UINavigationController *filterNavigationController;
@property (nonatomic, retain) UIPopoverController *imagePopoverController;

- (IBAction)clearFiltersTouched:(id)sender;
- (IBAction)detectFacesTouched:(id)sender;
- (IBAction)clearFacesTouched:(id)sender;
- (IBAction)selectImageTouched:(id)sender;
- (IBAction)takePhotoTouched:(id)sender;
- (IBAction)saveToCameraRollTouched:(id)sender;

@end

