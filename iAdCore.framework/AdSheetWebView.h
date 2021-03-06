/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class NSMutableSet, NSMutableArray, ADAdJSO, <AdSheetWebViewDelegate>, NSString, UIViewController, NSMutableDictionary;

@interface AdSheetWebView : UIWebView  {
    BOOL _scrollingEnabled;
    BOOL _trackResourceRetrieval;
    <AdSheetWebViewDelegate> *_delegate;
    NSString *_qToken;
    BOOL _privilegedClient;
    BOOL _adManagesPurchaseFlow;
    UIViewController *_viewController;
    BOOL _webGLEnabled;
    ADAdJSO *_adScriptObject;
    NSMutableDictionary *_resourceLoadStartDates;
    NSMutableArray *_mapPlugins;
    id _currentModalOwner;
    struct dispatch_queue_s { } *_scriptObjectModalAccessDispatchQueue;
    int _javaScriptAlertButtonIndex;
    BOOL _isShuttingDown;
    NSMutableSet *_activeJavaScriptAlerts;
}

@property(readonly) float estimatedProgress;
@property(readonly) BOOL isBusy;
@property(retain) NSMutableSet * activeJavaScriptAlerts;
@property BOOL isShuttingDown;
@property int javaScriptAlertButtonIndex;
@property struct dispatch_queue_s { }* scriptObjectModalAccessDispatchQueue;
@property(retain) id currentModalOwner;
@property(retain) NSMutableArray * mapPlugins;
@property(retain) NSMutableDictionary * resourceLoadStartDates;
@property(retain) ADAdJSO * adScriptObject;
@property BOOL webGLEnabled;
@property UIViewController * viewController;
@property BOOL adManagesPurchaseFlow;
@property(getter=isPrivilegedClient) BOOL privilegedClient;
@property(retain) NSString * qToken;
@property <AdSheetWebViewDelegate> * delegate;
@property BOOL trackResourceRetrieval;
@property BOOL scrollingEnabled;

+ (void)initialize;

- (void)setWebGLEnabled:(BOOL)arg1;
- (void)setQToken:(id)arg1;
- (id)qToken;
- (void)loadWebArchiveData:(id)arg1;
- (void)scriptObject:(id)arg1 didReportSystemEventWithType:(int)arg2;
- (BOOL)isPrivilegedClient;
- (void)scriptObjectContentSignalsReady:(id)arg1;
- (void)scriptObject:(id)arg1 didChangeSupportedInterfaceOrientations:(unsigned int)arg2;
- (BOOL)adManagesPurchaseFlow;
- (void)clientApplicationDidBecomeActive;
- (void)setAdManagesPurchaseFlow:(BOOL)arg1;
- (void)setPrivilegedClient:(BOOL)arg1;
- (id)mapPlugins;
- (id)activeJavaScriptAlerts;
- (void)configureMapPlugin:(id)arg1;
- (void)mapPluginDestroyed:(id)arg1;
- (float)estimatedProgress;
- (void)willUnloadContent;
- (void)clientApplicationDidResignActive;
- (void)dispatchDOMEventWithName:(id)arg1 canBubble:(BOOL)arg2 cancelable:(BOOL)arg3;
- (id)scriptObjectValueForQToken:(id)arg1;
- (id)webViewForScriptObject:(id)arg1;
- (void)scriptObject:(id)arg1 didCreateView:(id)arg2;
- (void)scriptObject:(id)arg1 didReportClickEventWithContext:(id)arg2;
- (void)scriptObject:(id)arg1 didChangeContentOrientation:(int)arg2;
- (void)privilegedAdWantsToDismiss;
- (void)scriptObjectRequestsGeolocation:(id)arg1;
- (id)scriptObjectRequestsCurrentDisplayCapturedAsImage:(id)arg1;
- (struct OpaqueJSContext { }*)javaScriptContextRef;
- (BOOL)javaScriptObjectShouldBeginModalActivity:(id)arg1;
- (void)scriptObject:(id)arg1 requestsPresentModalViewController:(id)arg2 animated:(BOOL)arg3;
- (void)scriptObject:(id)arg1 requestsPresentPopoverViewController:(id)arg2 fromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 animated:(BOOL)arg4;
- (void)scriptObject:(id)arg1 requestsDismissModalViewControllerAnimated:(BOOL)arg2;
- (void)scriptObject:(id)arg1 requestsDismissPopoverViewControllerAnimated:(BOOL)arg2;
- (void)javaScriptObjectDidFinishModalActivity:(id)arg1;
- (id)scriptObject:(id)arg1 requestsURLForString:(id)arg2 allowOtherDomains:(BOOL)arg3;
- (void)setActiveJavaScriptAlerts:(id)arg1;
- (void)setIsShuttingDown:(BOOL)arg1;
- (int)javaScriptAlertButtonIndex;
- (void)setJavaScriptAlertButtonIndex:(int)arg1;
- (struct dispatch_queue_s { }*)scriptObjectModalAccessDispatchQueue;
- (void)setScriptObjectModalAccessDispatchQueue:(struct dispatch_queue_s { }*)arg1;
- (id)currentModalOwner;
- (void)setCurrentModalOwner:(id)arg1;
- (void)setMapPlugins:(id)arg1;
- (id)resourceLoadStartDates;
- (void)setResourceLoadStartDates:(id)arg1;
- (id)adScriptObject;
- (void)setAdScriptObject:(id)arg1;
- (BOOL)webGLEnabled;
- (BOOL)trackResourceRetrieval;
- (void)setTrackResourceRetrieval:(BOOL)arg1;
- (BOOL)isShuttingDown;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)setScrollingEnabled:(BOOL)arg1;
- (id)webView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
- (BOOL)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
- (id)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4;
- (void)webView:(id)arg1 decidePolicyForGeolocationRequestFromOrigin:(id)arg2 frame:(id)arg3 listener:(id)arg4;
- (id)webView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;
- (void)webView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)sendOrientationEventForOrientation:(int)arg1;
- (void)setPaused:(BOOL)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (BOOL)scrollingEnabled;
- (void)dealloc;
- (void)alertViewCancel:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)didMoveToWindow;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (BOOL)isBusy;
- (void)webView:(id)arg1 failedToParseSource:(id)arg2 baseLineNumber:(unsigned int)arg3 fromURL:(id)arg4 withError:(id)arg5 forWebFrame:(id)arg6;
- (void)webView:(id)arg1 exceptionWasRaised:(id)arg2 sourceId:(long)arg3 line:(int)arg4 forWebFrame:(id)arg5;

@end
