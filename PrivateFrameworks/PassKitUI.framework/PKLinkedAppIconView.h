/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKLinkedAppIconView : UIView <PKLinkedApplicationObserver> {
    UIVisualEffectView * _blurView;
    WLEasyToHitCustomButton * _iconButton;
    UIImage * _iconImage;
    PKLinkedApplication * _linkedApplication;
    BOOL  _translucent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) PKLinkedApplication *linkedApplication;
@property (readonly) Class superclass;
@property (getter=isTranslucent, nonatomic) BOOL translucent;

- (void).cxx_destruct;
- (void)_updateBlurMask;
- (void)_updateWithIconImage:(id)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithLinkedApplication:(id)arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (BOOL)isTranslucent;
- (void)layoutSubviews;
- (id)linkedApplication;
- (void)linkedApplicationDidChangeState:(id)arg1;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setTranslucent:(BOOL)arg1;
- (void)tapped:(id)arg1;

@end
