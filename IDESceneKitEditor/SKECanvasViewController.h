/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEViewController.h"

#import "SKETimeSliderDataSource-Protocol.h"

@class NSArrayController, NSPopUpButton, SKECanvasIdentifierView, SKEDocumentViewController, SKESceneView, SKESceneViewNestView, SKEShadowBox, SKETimeSlider;

@interface SKECanvasViewController : IDEViewController <SKETimeSliderDataSource>
{
    SKESceneView *sceneView;
    SKESceneViewNestView *nestView;
    SKECanvasIdentifierView *identifierView;
    SKETimeSlider *timeSlider;
    SKEShadowBox *_shadowBox;
    NSPopUpButton *povPopUpButton;
    NSArrayController *povArrayController;
    BOOL _enableJittering;
    BOOL _enableMultisampling;
    BOOL _enableAutomaticDefaultLighting;
    SKEDocumentViewController *_documentEditorViewController;
}

@property(retain, nonatomic) SKEDocumentViewController *documentEditorViewController; // @synthesize documentEditorViewController=_documentEditorViewController;
@property(nonatomic) BOOL enableAutomaticDefaultLighting; // @synthesize enableAutomaticDefaultLighting=_enableAutomaticDefaultLighting;
@property(nonatomic) BOOL enableMultisampling; // @synthesize enableMultisampling=_enableMultisampling;
@property(nonatomic) BOOL enableJittering; // @synthesize enableJittering=_enableJittering;
- (void).cxx_destruct;
@property double currentTime;
@property(readonly) double endTime;
@property(readonly) double startTime;
@property BOOL playing;
- (void)sceneViewLostSelectionAnchor:(id)arg1;
- (void)sceneView:(id)arg1 didUpdateSelectionAnchor:(struct CGPoint)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)primitiveInvalidate;
- (void)takeFocus;
- (void)viewWillUninstall;
- (void)viewDidInstall;

@end
