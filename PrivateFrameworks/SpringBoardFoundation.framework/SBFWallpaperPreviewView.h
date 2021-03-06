/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@class SBFLockScreenDateView, SBFWallpaperView;

@interface SBFWallpaperPreviewView : UIView {
    SBFLockScreenDateView *_dateView;
    SBFWallpaperView *_wallpaperView;
}

@property(retain) SBFLockScreenDateView * dateView;
@property(retain) SBFWallpaperView * wallpaperView;

- (void)_layoutDateView;
- (void)_layoutWallpaperView;
- (id)dateView;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setDateView:(id)arg1;
- (void)setWallpaperView:(id)arg1;
- (id)wallpaperView;

@end
