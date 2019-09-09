//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MetalImageOutput.h"

#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"

@class AVCaptureDevice, AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoDataOutput, MetalImageColorConversion, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString;

@interface MetalImageVideoCamera : MetalImageOutput <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    unsigned long long numberOfFramesCaptured;
    double totalFrameTimeDuringCapture;
    AVCaptureSession *_captureSession;
    AVCaptureDevice *_inputCamera;
    AVCaptureDeviceInput *videoInput;
    AVCaptureVideoDataOutput *videoOutput;
    _Bool capturePaused;
    unsigned long long outputRotation;
    NSObject<OS_dispatch_semaphore> *frameRenderingSemaphore;
    NSObject<OS_dispatch_queue> *cameraProcessingQueue;
    unsigned int _videoOutputPixelFormat;
    MetalImageColorConversion *_conversion;
    long long cameraPos;
    _Bool _horizontallyMirrorFrontFacingCamera;
    _Bool _horizontallyMirrorRearFacingCamera;
    int _frameRate;
    NSString *_captureSessionPreset;
    long long _outputImageOrientation;
}

+ (_Bool)isBackFacingCameraPresent;
+ (_Bool)isFrontFacingCameraPresent;
- (void).cxx_destruct;
- (long long)cameraPosition;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
@property(readonly, retain, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property(copy, nonatomic) NSString *captureSessionPreset; // @synthesize captureSessionPreset=_captureSessionPreset;
- (void)dealloc;
@property(nonatomic) int frameRate; // @synthesize frameRate=_frameRate;
@property(nonatomic) _Bool horizontallyMirrorFrontFacingCamera; // @synthesize horizontallyMirrorFrontFacingCamera=_horizontallyMirrorFrontFacingCamera;
@property(nonatomic) _Bool horizontallyMirrorRearFacingCamera; // @synthesize horizontallyMirrorRearFacingCamera=_horizontallyMirrorRearFacingCamera;
- (id)init;
- (id)initWithSessionPreset:(id)arg1 cameraPosition:(long long)arg2;
- (_Bool)isCameraRunning;
@property(nonatomic) long long outputImageOrientation; // @synthesize outputImageOrientation=_outputImageOrientation;
- (void)pauseCameraCapture;
- (void)processVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)resumeCameraCapture;
- (unsigned long long)rotationForOutput;
@property(nonatomic) unsigned int videoOutputPixelFormat; // @synthesize videoOutputPixelFormat=_videoOutputPixelFormat;
- (void)startCameraCapture;
- (void)stopCameraCapture;
- (void)switchCameraDevice;
- (void)updateColorConversionWithAttachments:(void *)arg1;
- (void)updateOrientation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
