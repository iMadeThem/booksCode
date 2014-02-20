//
//  ICFViewController.h
//  BackgroundTasks
//
//  Created by Joe Keeley on 11/24/12.
//  Copyright (c) 2012 Joe Keeley. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface ICFViewController : UIViewController

@property (retain, nonatomic) AVAudioPlayer *audioPlayer;
@property (retain, nonatomic) IBOutlet UIButton *audioButton;
@property (retain, nonatomic) IBOutlet UIButton *backgroundButton;

- (IBAction)playBackgroundMusicTouched:(id)sender;
- (IBAction)startBackgroundTaskTouched:(id)sender;

@end
