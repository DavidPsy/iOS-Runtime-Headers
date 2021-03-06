/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSURL;

@interface SAUIAppPunchOutEvent : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property(copy) NSString * appDisplayName;
@property(copy) NSString * bundleId;
@property(copy) NSString * originalCommandId;
@property(copy) NSString * punchOutName;
@property(copy) NSURL * punchOutUri;
@property(copy) NSString * refId;

+ (id)appPunchOutEvent;
+ (id)appPunchOutEventWithDictionary:(id)arg1 context:(id)arg2;

- (id)appDisplayName;
- (id)bundleId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)originalCommandId;
- (id)punchOutName;
- (id)punchOutUri;
- (void)setAppDisplayName:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setOriginalCommandId:(id)arg1;
- (void)setPunchOutName:(id)arg1;
- (void)setPunchOutUri:(id)arg1;

@end
