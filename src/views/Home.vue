<template>
	<div id="home">
		<h1>iOS Headers</h1>
		<input v-model='selectedHeader'>
		<button @click='fetchForVersion'>Fetch</button>
	</div>
</template>

<script lang="ts">
import Vue from 'vue'
import Component from 'vue-class-component'
import axios, { AxiosResponse, AxiosInstance } from 'axios'
import { Getter } from 'vuex-class'


const ax:AxiosInstance = axios.create({
	baseURL: process.env.VUE_APP_API_URL || 'http://localhost/'
})

@Component
export default class Home extends Vue {
	selectedHeader:string = ''

	@Getter('headersForVersion') headersForVersion:any
	@Getter('availableVersions') availableVersions:any

	fetchForVersion() {
		let data = this.headersForVersion(this.selectedHeader)
		console.log(data);
	}
}
</script>

