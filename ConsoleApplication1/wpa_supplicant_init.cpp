struct wpa_global* wpa_supplicant_init(struct wap_params* params)
{
	struct wpa_global* global;
	init ret, i;
	...
#ifdef CONFIG_DRIVER_NDIS
		.... // windows driver֧��
#endif
#ifdef CONFIG_NO_WPA_MSG
		// ����ȫ�ֻص�����
		.....
		ret = eap_register_methods();
#endif

}