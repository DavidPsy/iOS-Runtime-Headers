/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@class <SBFProceduralWallpaper>, NSTimer, UIImage;

@interface SBFProceduralWallpaperView : SBFWallpaperView <SBFProceduralWallpaperDelegate> {
    UIImage *_blur;
    NSTimer *_colorSampleTimer;
    BOOL _pausedForThermalReasons;
    <SBFProceduralWallpaper> *_proceduralWallpaper;
    int _thermalNotificationToken;
}

+ (BOOL)_allowsParallax;
+ (BOOL)_allowsRasterization;

- (id)_blurredImage;
- (id)_computeAverageColor;
- (void)_handleVariantChange;
- (void)_handleVisibilityChange;
- (id)_newImageFromBlurSurface:(struct __IOSurface { }*)arg1 rect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)_sample;
- (BOOL)_shouldSampleContinuously;
- (void)_startGeneratingBlurredImages;
- (void)_stopGeneratingBlurredImages;
- (void)_updateAnimating;
- (void)_updateSampleTimer;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 proceduralWallpaper:(id)arg2;
- (void)invalidate;
- (BOOL)isDisplayingWallpaper:(id)arg1;
- (void)layoutSubviews;
- (void)setContinuousColorSamplingEnabled:(BOOL)arg1;
- (void)setWallpaperAnimationEnabled:(BOOL)arg1;
- (void)wallpaper:(id)arg1 didComputeAverageColor:(id)arg2 forRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)wallpaper:(id)arg1 didGenerateBlur:(struct __IOSurface { }*)arg2 forRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;

@end