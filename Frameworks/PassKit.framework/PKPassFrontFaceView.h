/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class UILabel, WLEasyToHitCustomButton;

@interface PKPassFrontFaceView : PKPassFaceView {
    WLEasyToHitCustomButton *_flipButton;
    UILabel *_logoLabel;
    WLEasyToHitCustomButton *_shareButton;
    BOOL _showsInfo;
    BOOL _showsShare;
}

@property BOOL showsInfo;
@property BOOL showsShare;

- (void)_flipButtonPressed;
- (id)_relevantBuckets;
- (void)_shareButtonPressed;
- (struct CGSize { float x1; float x2; })contentSize;
- (void)createBodyContentViews;
- (void)createHeaderContentViews;
- (void)dealloc;
- (id)init;
- (BOOL)isFrontFace;
- (void)layoutSubviews;
- (id)passFaceTemplate;
- (void)prepareForFlip;
- (void)setClipsContent:(BOOL)arg1;
- (void)setShowsInfo:(BOOL)arg1;
- (void)setShowsShare:(BOOL)arg1;
- (id)shortFaceTemplate;
- (id)shortScrunchedFaceTemplate;
- (BOOL)showsInfo;
- (BOOL)showsShare;
- (id)tallFaceTemplate;
- (void)updateValidity;

@end
