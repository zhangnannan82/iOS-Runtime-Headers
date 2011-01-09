/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSString;



@interface MFComposeRecipient : NSObject 
{
    void *_record;
    NSInteger _recordID;
    NSInteger _property;
    NSInteger _identifier;
    NSString *_address;
    NSString *_label;
}

+ (id)recipientWithProperty:(NSInteger)arg1 address:(id)arg2;
+ (id)recipientWithRecord:(void*)arg1 property:(NSInteger)arg2 identifier:(NSInteger)arg3;
+ (id)mf_recipientWithGALResult:(id)arg1;
+ (id)recipientWithRecord:(void*)arg1 recordID:(NSInteger)arg2 property:(NSInteger)arg3 identifier:(NSInteger)arg4;
+ (void)_initializeSafeCategory;

- (NSInteger)recordID;
- (NSInteger)property;
- (void*)record;
- (id)compositeName;
- (id)displayString;
- (void)setIdentifier:(NSInteger)arg1;
- (NSInteger)identifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)label;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)_unformattedAddress;
- (id)uncommentedAddress;
- (id)initWithRecord:(void*)arg1 recordID:(NSInteger)arg2 property:(NSInteger)arg3 identifier:(NSInteger)arg4 address:(id)arg5;
- (id)commentedAddress;
- (void)setRecord:(void*)arg1 recordID:(NSInteger)arg2 identifier:(NSInteger)arg3;
- (id)unlocalizedLabel;
- (id)address;
- (NSInteger)property;
- (BOOL)isPhone;
- (BOOL)isEmail;
- (NSInteger)property;
- (BOOL)isPhone;
- (BOOL)isEmail;
- (id)accessibilityLabel;

@end