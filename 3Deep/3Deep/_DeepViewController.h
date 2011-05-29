//
//  _DeepViewController.h
//  3Deep
//
//  Created by Rob Cavin on 5/26/11.
//  Copyright 2011 BumblebeeJuice. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <CoreMotion/CoreMotion.h>

@interface _DeepViewController : UIViewController <AVCaptureVideoDataOutputSampleBufferDelegate> {
 
    AVCaptureSession* session;
    CMMotionManager* motionManager;
    
    NSMutableArray* frameCaptureData;
    
    UIButton* captureNewButton;
    UIButton* stepCurrentButton;
    UIImageView* frameImageView;
    UIView* cameraView;
    
    NSInteger currentFrame;
}

@property (nonatomic,retain) AVCaptureSession* session;
@property (nonatomic,retain) CMMotionManager* motionManager;
@property (nonatomic,retain) NSMutableArray* frameCaptureData;
@property (nonatomic,retain) IBOutlet UIButton* captureNewButton;
@property (nonatomic,retain) IBOutlet UIButton* stepCurrentButton;
@property (nonatomic,retain) IBOutlet UIImageView* frameImageView;
@property (nonatomic,retain) IBOutlet UIView* cameraView;

- (UIImage *) imageFromSampleBuffer:(CMSampleBufferRef) sampleBuffer;
- (void) setupCaptureSession;

- (IBAction) captureNewButtonPressed;
- (IBAction) stepCurrentButtonPressed;


@end
